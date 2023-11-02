
@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol> {
    CLSPOICache * _cache;
    bool  _isCancelled;
    NSArray * _muids;
    NSArray * _resolvedBusinessItems;
    <GEOMapServiceTicket> * _ticket;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly, copy) NSArray *muids;
@property (nonatomic, readonly) NSArray *resolvedBusinessItems;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOMapServiceTicket> *ticket;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithMUIDs:(id)arg1;
- (bool)isCancelled;
- (id)muids;
- (void)prepareForRetry;
- (id)resolvedBusinessItems;
- (void)submitWithHandler:(id /* block */)arg1;
- (id)ticket;

@end
