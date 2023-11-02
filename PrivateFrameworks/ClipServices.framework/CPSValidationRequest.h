
@interface CPSValidationRequest : NSObject <NSSecureCoding> {
    NSArray * _bundleIdentifiers;
    NSArray * _urls;
}

@property (nonatomic, readonly) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) NSArray *urls;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLs:(id)arg1 bundleIDs:(id)arg2;
- (id)initWithValidation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)urls;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
