
@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket <GEOMapServiceWiFiQualityLocationSearchTicket, GEOMapServiceWiFiQualityNetworkSearchTicket, GEOMapServiceWiFiQualityTileLoadTicket> {
    NSString * _eTag;
    GEOWiFiQualityServiceRequest * _request;
    NSString * _requestID;
    NSString * _tileKey;
}

@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel;
- (void)cancelLocationSearch;
- (void)cancelNetworkSearch;
- (void)cancelTileLoad;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (id)initWithRequest:(id)arg1 requestId:(id)arg2;
- (id)initWithRequestID:(id)arg1;
- (id)initWithTileKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3;
- (void)submitLocationSearchWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)submitNetworkSearchWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)submitTileLoadWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;

@end
