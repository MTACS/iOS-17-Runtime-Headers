
@interface SAUSCardSection : SADomainObject

@property (nonatomic, retain) SAUIAppPunchOut *punchOut;

+ (id)cardSection;
+ (id)cardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)punchOut;
- (void)setPunchOut:(id)arg1;

@end
