
@interface SFClientGetDeviceAssetsResults : NSObject <NSSecureCoding> {
    NSString * _assetBundlePath;
}

@property (nonatomic, copy) NSString *assetBundlePath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetBundlePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAssetBundlePath:(id)arg1;

@end
