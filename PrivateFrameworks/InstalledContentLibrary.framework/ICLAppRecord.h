
@interface ICLAppRecord : ICLPlaceholderRecord <NSCopying, NSSecureCoding> {
    NSArray * _driverKitExtensionURLs;
    bool  _isUpdatedSystemApp;
    NSURL * _parallelPlaceholderURL;
    NSArray * _stashedVersions;
}

@property (nonatomic, copy) NSArray *driverKitExtensionURLs;
@property (nonatomic) bool isUpdatedSystemApp;
@property (nonatomic, copy) NSURL *parallelPlaceholderURL;
@property (nonatomic, copy) NSArray *stashedVersions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)driverKitExtensionURLs;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyRecordDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUpdatedSystemApp;
- (id)legacyRecordDictionary;
- (id)parallelPlaceholderURL;
- (void)setDriverKitExtensionURLs:(id)arg1;
- (void)setIsUpdatedSystemApp:(bool)arg1;
- (void)setParallelPlaceholderURL:(id)arg1;
- (void)setStashedVersions:(id)arg1;
- (id)stashedVersions;

@end
