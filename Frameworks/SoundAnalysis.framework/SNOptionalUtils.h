
@interface SNOptionalUtils : NSObject

+ (id)dictionaryWithNullableObject:(id)arg1 key:(id)arg2;
+ (id)dictionaryWithNullableOptionalObject:(id)arg1 key:(id)arg2;
+ (id)dictionaryWithOptionalObject:(id)arg1 key:(id)arg2;
+ (id)nullableObject:(id)arg1 orDefault:(id)arg2;
+ (id)optionalWithNullableObject:(id)arg1;

- (id)init;

@end
