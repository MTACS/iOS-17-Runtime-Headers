
@interface HRERecommendableObjectUtilities : NSObject

+ (bool)_actionMap:(id)arg1 includesType:(id)arg2 forRecommendableObject:(id)arg3;
+ (id)actionMapFromActionMap:(id)arg1 forRecommendableObject:(id)arg2;
+ (id)filterRecommendableObjects:(id)arg1 excludingObjectsInActions:(id)arg2;
+ (id)filterRecommendableObjects:(id)arg1 toMatchTypes:(id)arg2;
+ (id)filterRecommendableObjects:(id)arg1 toRooms:(id)arg2;
+ (id)recommendableObject:(id)arg1 actionBuildersDerivedFromActions:(id)arg2;
+ (bool)recommendableObject:(id)arg1 containsObject:(id)arg2;
+ (bool)recommendableObject:(id)arg1 involvedInAction:(id)arg2;
+ (bool)recommendableObject:(id)arg1 involvedInActionMap:(id)arg2;
+ (bool)recommendableObject:(id)arg1 isEffectivelyEqualToObject:(id)arg2;
+ (bool)recommendableObjects:(id)arg1 matchAllRules:(id)arg2;
+ (id)recommendableObjectsFromHomeKitObjects:(id)arg1;

@end
