
@interface SAGuidanceGuideSection : SADomainObject

@property (nonatomic, copy) NSArray *guideUtterances;
@property (nonatomic, copy) NSString *sectionName;

+ (id)guideSection;
+ (id)guideSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)guideUtterances;
- (id)sectionName;
- (void)setGuideUtterances:(id)arg1;
- (void)setSectionName:(id)arg1;

@end
