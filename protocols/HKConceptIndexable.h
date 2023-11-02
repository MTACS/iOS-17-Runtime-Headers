
@protocol HKConceptIndexable <HKCodedObject>

@required

+ (NSArray *)cachedConceptRelationshipKeyPaths;
+ (NSArray *)indexableConceptKeyPaths;

- (NSUUID *)UUID;
- (NSString *)country;
- (NSLocale *)locale;
- (long long)recordCategoryType;

@end
