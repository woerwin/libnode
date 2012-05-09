// Copyright (c) 2012 Plenluno All rights reserved.

#include "./http_server_response_impl.h"

namespace libj {
namespace node {
namespace http {

Type<String>::Cptr ServerResponse::EVENT_CLOSE = String::create("close");

Type<ServerResponse>::Ptr ServerResponse::create() {
    return ServerResponseImpl::create();
}

}  // namespace http
}  // namespace node
}  // namespace libj