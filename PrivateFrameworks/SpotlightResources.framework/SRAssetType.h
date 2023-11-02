
@interface SRAssetType : NSObject {
    NSString * _assetType;
    long long  _compatibilityVersion;
    NSSet * _contentTypes;
    NSString * _xpcName;
}

@property (nonatomic, copy) NSString *assetType;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic, copy) NSSet *contentTypes;
@property (nonatomic, copy) NSString *xpcName;

- (void).cxx_destruct;
- (id)assetType;
- (long long)compatibilityVersion;
- (id)contentTypes;
- (void)setAssetType:(id)arg1;
- (void)setCompatibilityVersion:(long long)arg1;
- (void)setContentTypes:(id)arg1;
- (void)setXpcName:(id)arg1;
- (id)xpcName;

@end
