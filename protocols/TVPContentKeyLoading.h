
@protocol TVPContentKeyLoading <NSObject>

@required

- (void)loadFairPlayStreamingKeyRequests:(NSArray *)arg1;

@optional

- (void)loadFairPlayStreamingKeyRequests:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateOfflineKeyWithIdentifier:(NSURL *)arg1 updatedOfflineKeyData:(NSData *)arg2;

@end
