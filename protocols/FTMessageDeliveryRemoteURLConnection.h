
@protocol FTMessageDeliveryRemoteURLConnection <NSObject>

@required

- (id /* block */)block:(void *)arg1; // needs 1 arg types, found 9: id /* block */, NSURLResponse *, long long, NSData *, NSError *, NSDictionary *, void*, id, SEL
- (NSString *)bundleIdentifierForDataUsage;
- (void)cancel;
- (int)concurrentConnections;
- (bool)disableKeepAlive;
- (bool)forceCellularIfPossible;
- (int)keepAliveCell;
- (int)keepAliveWifi;
- (void)load;
- (NSURLRequest *)request;
- (bool)requireIDSHost;
- (void)setBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLResponse *, long long, NSData *, NSError *, NSDictionary *, void*
- (void)setBundleIdentifierForDataUsage:(NSString *)arg1;
- (void)setConcurrentConnections:(int)arg1;
- (void)setDisableKeepAlive:(bool)arg1;
- (void)setForceCellularIfPossible:(bool)arg1;
- (void)setKeepAliveCell:(int)arg1;
- (void)setKeepAliveWifi:(int)arg1;
- (void)setRequest:(NSURLRequest *)arg1;
- (void)setRequireIDSHost:(bool)arg1;
- (void)setShouldReturnTimingData:(bool)arg1;
- (void)setShouldUsePipelining:(bool)arg1;
- (bool)shouldReturnTimingData;
- (bool)shouldUsePipelining;

@end
