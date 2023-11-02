
@interface SXAdvertisementComponent : SXComponent <SXAdComponent> {
    unsigned long long  adType;
}

@property (nonatomic, readonly) unsigned long long adType;
@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONDictionary *advertising;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) <SXComponentAnchor> *anchor;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (nonatomic, readonly) UIColor *debugColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) NSString *placementIdentifier;
@property (nonatomic, readonly) unsigned long long placementType;
@property (nonatomic, readonly) bool requiresLinkedContent;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) NSString *type;

- (unsigned long long)adType;
- (id)debugColor;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (unsigned long long)placementType;
- (unsigned long long)traits;

@end
