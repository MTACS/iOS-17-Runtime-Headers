
@protocol SXComponentProperties <SXConditionalComponentProperties>

@required

- (SXJSONArray *)additions;
- (SXJSONDictionary *)analytics;
- (SXComponentClassification *)classification;
- (SXComponentConditions *)conditions;
- (unsigned long long)contentRelevance;
- (NSString *)identifier;
- (bool)requiresLinkedContent;
- (int)role;
- (unsigned long long)traits;
- (NSString *)type;

@end
