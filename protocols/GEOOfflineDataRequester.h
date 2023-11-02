
@protocol GEOOfflineDataRequester <NSObject>

@required

- (void)cancel;
- (<GEOOfflineDataRequesterDelegate> *)delegate;
- (GEOOfflineDataRequest *)request;
- (void)setDelegate:(id <GEOOfflineDataRequesterDelegate>)arg1;
- (void)start;

@end
