
@interface STKStickerAttributionInfo : NSObject <NSSecureCoding> {
    void adamID;
    void bundleIdentifier;
    void name;
}

@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamID;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setBundleIdentifier:(id)arg1;

@end
