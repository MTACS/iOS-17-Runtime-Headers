
@interface VSAssetBase : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSNumber * _compatibilityVersion;
    NSNumber * _contentVersion;
    NSNumber * _downloadSize;
    bool  _isPurgeable;
    NSString * _masteredVersion;
    long long  _storage;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSNumber *compatibilityVersion;
@property (nonatomic, copy) NSNumber *contentVersion;
@property (nonatomic, copy) NSNumber *downloadSize;
@property (nonatomic) bool isPurgeable;
@property (nonatomic, copy) NSString *masteredVersion;
@property (nonatomic) long long storage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)compatibilityVersion;
- (id)contentVersion;
- (id)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPurgeable;
- (id)masteredVersion;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCompatibilityVersion:(id)arg1;
- (void)setContentVersion:(id)arg1;
- (void)setDownloadSize:(id)arg1;
- (void)setIsPurgeable:(bool)arg1;
- (void)setMasteredVersion:(id)arg1;
- (void)setStorage:(long long)arg1;
- (long long)storage;

@end
