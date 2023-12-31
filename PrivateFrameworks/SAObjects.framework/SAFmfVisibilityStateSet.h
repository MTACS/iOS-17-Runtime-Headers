
@interface SAFmfVisibilityStateSet : SADomainCommand

@property (nonatomic) bool visible;

+ (id)visibilityStateSet;
+ (id)visibilityStateSetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setVisible:(bool)arg1;
- (bool)visible;

@end
