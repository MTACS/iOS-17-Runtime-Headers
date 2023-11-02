
@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {
    GEOPDPlaceRequest * _request;
    id  _requestToken;
    GEOPDPlaceResponse * _response;
}

- (void).cxx_destruct;
- (void)cancel;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (id)initWithTraits:(id)arg1;
- (void)performSubmitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(id /* block */)arg4;
- (void)performSubmitWithHandler:(id /* block */)arg1 timeout:(double)arg2 networkActivity:(id /* block */)arg3;

@end
