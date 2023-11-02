
@interface BMEntityRelationshipEventUtilities : NSObject

+ (bool)checkNullableArrayEqualityForSource:(id)arg1 target:(id)arg2;
+ (bool)checkNullableDictionaryEqualityForSource:(id)arg1 target:(id)arg2;
+ (bool)checkNullablePersonEntityEqualityForSource:(id)arg1 target:(id)arg2;
+ (bool)checkNullableStringEqualityForSource:(id)arg1 target:(id)arg2;
+ (bool)checkNullableTopicEntityEqualityForSource:(id)arg1 target:(id)arg2;

@end
