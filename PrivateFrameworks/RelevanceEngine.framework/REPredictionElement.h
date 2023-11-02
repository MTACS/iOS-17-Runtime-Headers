
@interface REPredictionElement : NSObject <NSSecureCoding> {
    NSString * _applicationBundleIdentifier;
    NSString * _bundleIdentifier;
    NSString * _identifier;
    NSString * _interaction;
    unsigned long long  _privacyBehavior;
    NSArray * _relevanceProviders;
    NSString * _section;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *interaction;
@property (nonatomic, readonly) unsigned long long privacyBehavior;
@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, retain) NSString *section;

+ (id)predictionElementFromElement:(id)arg1;
+ (id)predictionElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 bundleIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)interaction;
- (unsigned long long)privacyBehavior;
- (id)relevanceProviders;
- (id)section;
- (void)setSection:(id)arg1;

@end
