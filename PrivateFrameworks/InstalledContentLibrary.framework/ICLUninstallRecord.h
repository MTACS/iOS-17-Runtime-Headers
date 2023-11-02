
@interface ICLUninstallRecord : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _hasParallelPlaceholder;
    bool  _isPlaceholder;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) bool hasParallelPlaceholder;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, readonly) NSDictionary *legacyDictionary;

+ (bool)supportsSecureCoding;
+ (id)uninstallRecordArrayToDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasParallelPlaceholder;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (id)legacyDictionary;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasParallelPlaceholder:(bool)arg1;
- (void)setIsPlaceholder:(bool)arg1;

@end
