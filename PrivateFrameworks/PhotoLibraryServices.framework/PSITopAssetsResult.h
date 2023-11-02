
@interface PSITopAssetsResult : NSObject {
    struct __CFArray { } * _assetIds;
    NSArray * _assetUUIDs;
    <PSITopAssetsResultDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _isolationQueue;
}

@property (nonatomic, retain) struct __CFArray { }*assetIds;
@property (nonatomic, readonly) unsigned long long assetMatchCount;
@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic) <PSITopAssetsResultDelegate> *delegate;

- (void).cxx_destruct;
- (struct __CFArray { }*)assetIds;
- (unsigned long long)assetMatchCount;
- (id)assetUUIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fetchAssetUUIDsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)setAssetIds:(struct __CFArray { }*)arg1;
- (void)setDelegate:(id)arg1;

@end
