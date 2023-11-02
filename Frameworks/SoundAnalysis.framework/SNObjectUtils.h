
@interface SNObjectUtils : NSObject

+ (bool)checkEqualityAllowingNilBetweenObject:(id)arg1 andOther:(id)arg2;
+ (bool)checkTransformDoesNotChangeObject:(id)arg1 transform:(id /* block */)arg2;
+ (bool)checkTransformsDoNotChangeObject:(id)arg1 transforms:(id)arg2;
+ (bool)classOfObject:(id)arg1 isKindOfAnyOfOptions:(id)arg2;
+ (bool)validateClassOfObject:(id)arg1 isKindOf:(Class)arg2 error:(id*)arg3;
+ (bool)validateClassOfObject:(id)arg1 isKindOfAnyOfOptions:(id)arg2 error:(id*)arg3;
+ (bool)validateEqualityBetweenObject:(id)arg1 expected:(id)arg2 error:(id*)arg3;

- (id)init;

@end
