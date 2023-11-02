
@interface CPSDeveloperOverride : NSObject <NSCopying, NSSecureCoding> {
    long long  _action;
    NSString * _clipBundleID;
    struct CGImage { } * _heroImage;
    NSString * _invocationURL;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSString *clipBundleID;
@property (nonatomic) struct CGImage { }*heroImage;
@property (nonatomic, readonly) NSURL *heroImageURL;
@property (nonatomic, copy) NSString *invocationURL;
@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (unsigned long long)_indexOf:(id)arg1;
+ (id)allOverrides;
+ (bool)hasOverride;
+ (void)loadAllOverridesIfNeeded;
+ (id)overrideForURL:(id)arg1;
+ (void)persistAllOverrides;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (void)clear;
- (id)clipBundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (struct CGImage { }*)heroImage;
- (id)heroImageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)invocationURL;
- (bool)isComplete;
- (bool)isValid;
- (void)save;
- (void)setAction:(long long)arg1;
- (void)setClipBundleID:(id)arg1;
- (void)setHeroImage:(struct CGImage { }*)arg1;
- (void)setInvocationURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
