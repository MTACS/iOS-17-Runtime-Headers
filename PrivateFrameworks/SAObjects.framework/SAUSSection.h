
@interface SAUSSection : SADomainObject

@property (nonatomic, copy) NSArray *cardResults;
@property (nonatomic, copy) NSArray *genericResults;
@property (nonatomic, retain) SAUIAppPunchOut *punchOut;
@property (nonatomic, copy) NSString *sectionTitle;

+ (id)section;
+ (id)sectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)cardResults;
- (id)encodedClassName;
- (id)genericResults;
- (id)groupIdentifier;
- (id)punchOut;
- (id)sectionTitle;
- (void)setCardResults:(id)arg1;
- (void)setGenericResults:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setSectionTitle:(id)arg1;

@end
