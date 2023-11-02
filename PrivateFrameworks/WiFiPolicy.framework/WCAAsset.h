
@interface WCAAsset : NSObject <NSSecureCoding> {
    NSString * _extension;
    unsigned long long  _installedAssetVersion;
    MAAsset * _latestInstalledAsset;
    unsigned long long  _latestInstalledVersion;
    MAAsset * _latestNotInstalledAsset;
    unsigned long long  _latestNotInstalledVersion;
    NSString * _name;
}

@property (nonatomic, retain) NSString *extension;
@property unsigned long long installedAssetVersion;
@property (nonatomic, retain) MAAsset *latestInstalledAsset;
@property unsigned long long latestInstalledVersion;
@property (nonatomic, retain) MAAsset *latestNotInstalledAsset;
@property unsigned long long latestNotInstalledVersion;
@property (nonatomic, retain) NSString *name;

+ (id)assetWithName:(id)arg1 andExtension:(id)arg2;
+ (id)beaconsDataAsset;
+ (bool)supportsSecureCoding;
+ (id)wifiBehaviorPlistAsset;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extension;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installedAssetVersion;
- (bool)isEqual:(id)arg1;
- (id)latestInstalledAsset;
- (unsigned long long)latestInstalledVersion;
- (id)latestNotInstalledAsset;
- (unsigned long long)latestNotInstalledVersion;
- (id)name;
- (void)setExtension:(id)arg1;
- (void)setInstalledAssetVersion:(unsigned long long)arg1;
- (void)setLatestInstalledAsset:(id)arg1;
- (void)setLatestInstalledVersion:(unsigned long long)arg1;
- (void)setLatestNotInstalledAsset:(id)arg1;
- (void)setLatestNotInstalledVersion:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
