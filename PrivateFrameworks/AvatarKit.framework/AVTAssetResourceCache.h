
@interface AVTAssetResourceCache : NSObject {
    unsigned long long  _policy;
    NSMapTable * _resources;
}

@property (nonatomic) unsigned long long policy;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)policy;
- (void)releaseAsset:(id)arg1;
- (id)resourceForAsset:(id)arg1;
- (void)retainAsset:(id)arg1;
- (void)setPolicy:(unsigned long long)arg1;

@end
