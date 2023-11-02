
@interface SXButtonComponent : SXComponent <SXButtonComponent>

@property (nonatomic, readonly) <SXAction> *action;
@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) <SXComponentAnchor> *anchor;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) bool requiresLinkedContent;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) NSString *type;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

@end
