
@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {
    <GEOMapItem> * _mapItemToRefine;
    id /* block */  _preSubmitUpdateRequestBlock;
    GEOPDPlaceRequest * _request;
    id  _requestToken;
    GEOPDPlaceResponse * _response;
    id /* block */  _retryRequestForErrorBlock;
}

- (void).cxx_destruct;
- (void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(id /* block */)arg4 refinedHandler:(id /* block */)arg5 networkActivity:(id /* block */)arg6;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)cancel;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (id)description;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 preSubmitUpdateRequestBlock:(id /* block */)arg4 retryForErrorBlock:(id /* block */)arg5;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 preSubmitUpdateRequestBlock:(id /* block */)arg3 retryForErrorBlock:(id /* block */)arg4;
- (id)initWithTraits:(id)arg1;
- (id)resultSectionHeader;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
