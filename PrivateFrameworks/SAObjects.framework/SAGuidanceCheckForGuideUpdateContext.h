
@interface SAGuidanceCheckForGuideUpdateContext : SADomainObject

@property (nonatomic, copy) NSArray *supportedFeatures;

+ (id)checkForGuideUpdateContext;
+ (id)checkForGuideUpdateContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSupportedFeatures:(id)arg1;
- (id)supportedFeatures;

@end
