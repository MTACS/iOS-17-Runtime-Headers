
@interface SPAssetCacheAssets : NSObject {
    NSMutableArray * _assets;
}

@property (nonatomic, retain) NSMutableArray *assets;

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)assets;
- (id)init;
- (void)setAssets:(id)arg1;

@end
