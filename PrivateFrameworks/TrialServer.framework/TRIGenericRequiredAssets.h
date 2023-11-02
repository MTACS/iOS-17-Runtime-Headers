
@interface TRIGenericRequiredAssets : NSObject <NSCopying> {
    NSArray * _cloudKit;
    NSArray * _mobileAsset;
}

@property (nonatomic, readonly) NSArray *cloudKit;
@property (nonatomic, readonly) NSArray *mobileAsset;

+ (id)assetsWithCloudKit:(id)arg1 mobileAsset:(id)arg2;

- (void).cxx_destruct;
- (id)cloudKit;
- (id)copyWithReplacementCloudKit:(id)arg1;
- (id)copyWithReplacementMobileAsset:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCloudKit:(id)arg1 mobileAsset:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssets:(id)arg1;
- (id)mobileAsset;

@end
