
@protocol PHAssetResourceRequest <NSObject>

@required

- (PHAssetResource *)assetResource;
- (void)cancel;
- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (<PHAssetResourceRequestDelegate> *)delegate;
- (NSDictionary *)info;
- (bool)isCancelled;
- (unsigned long long)managerID;
- (PHAssetResourceRequestOptions *)options;
- (int)requestID;
- (void)setTaskIdentifier:(NSString *)arg1;
- (void)startRequest;
- (NSString *)taskIdentifier;

@end
