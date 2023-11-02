
@interface SXContainerComponent : SXComponent

@property (nonatomic, readonly) SXJSONArray *allComponents;
@property (nonatomic, readonly) bool allowAutoplacedAds;
@property (nonatomic, readonly) SXJSONArray *components;
@property (nonatomic, readonly) <SXContentDisplay> *contentDisplay;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (id /* block */)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)arg1;
+ (id)typeString;

- (bool)allowAutoplacedAdsWithValue:(id)arg1 withType:(int)arg2;
- (bool)requiresLinkedContent;

@end
