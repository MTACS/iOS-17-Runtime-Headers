
@interface SNKeyValueUtils : NSObject

+ (bool)addKey:(id)arg1 value:(id)arg2 toDictionary:(id)arg3 error:(id*)arg4;
+ (bool)addKeyPath:(id)arg1 value:(id)arg2 toObject:(id)arg3 error:(id*)arg4;
+ (void)addObserver:(id)arg1 forKeyPaths:(id)arg2 ofObject:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5;
+ (id)addObserverWithBlock:(id /* block */)arg1 forKeyPaths:(id)arg2 ofObject:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5;
+ (bool)applyMutation:(id)arg1 toObject:(id)arg2 error:(id*)arg3;
+ (bool)applyMutations:(id)arg1 toObject:(id)arg2 error:(id*)arg3;
+ (id)dictionaryAddingKey:(id)arg1 value:(id)arg2 toDictionary:(id)arg3 error:(id*)arg4;
+ (id)dictionaryAddingKeyIfAbsent:(id)arg1 value:(id)arg2 toDictionary:(id)arg3;
+ (id)dictionaryAssigningKey:(id)arg1 value:(id)arg2 inDictionary:(id)arg3;
+ (id)dictionaryRemovingKey:(id)arg1 fromDictionary:(id)arg2 error:(id*)arg3;
+ (id)dictionaryUpdatingKey:(id)arg1 value:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4;
+ (id)keyForOptionalObject:(id)arg1 inDictionary:(id)arg2 error:(id*)arg3;
+ (id)keyForRequiredObject:(id)arg1 inDictionary:(id)arg2 error:(id*)arg3;
+ (id)mutationOfType:(long long)arg1 keyPath:(id)arg2 value:(id)arg3 error:(id*)arg4;
+ (id)objectForKey:(id)arg1 satisfyingPredicate:(id /* block */)arg2 fromDictionary:(id)arg3;
+ (id)objectForOptionalKey:(id)arg1 defaultValue:(id)arg2 fromDictionary:(id)arg3;
+ (id)objectForOptionalKey:(id)arg1 fromDictionary:(id)arg2;
+ (id)objectForRequiredKey:(id)arg1 fromDictionary:(id)arg2 error:(id*)arg3;
+ (id)objectOfClass:(Class)arg1 forKey:(id)arg2 fromDictionary:(id)arg3;
+ (id)objectOfClasses:(id)arg1 forKey:(id)arg2 fromDictionary:(id)arg3;
+ (void)overrideValuesInObject:(id)arg1 withValuesInDictionary:(id)arg2;
+ (bool)overrideValuesInObject:(id)arg1 withValuesInDictionary:(id)arg2 dictionaryToObjectKeyMappings:(id)arg3 error:(id*)arg4;
+ (id)planToTransformInitialDictionary:(id)arg1 intoFinalDictionary:(id)arg2;
+ (id)planToTransformInitialDictionary:(id)arg1 intoFinalDictionary:(id)arg2 usingOnlyAddAndRemoveMutations:(bool)arg3;
+ (bool)removeKey:(id)arg1 fromDictionary:(id)arg2 error:(id*)arg3;
+ (bool)removeKeyPath:(id)arg1 fromObject:(id)arg2 error:(id*)arg3;
+ (void)removeObserver:(id)arg1 forKeyPaths:(id)arg2 ofObject:(id)arg3 context:(void*)arg4;
+ (id)requiredObjectForKey:(id)arg1 satisfyingPredicate:(id /* block */)arg2 fromDictionary:(id)arg3 error:(id*)arg4;
+ (id)requiredObjectOfClass:(Class)arg1 forKey:(id)arg2 fromDictionary:(id)arg3 error:(id*)arg4;
+ (id)requiredObjectOfClasses:(id)arg1 forKey:(id)arg2 fromDictionary:(id)arg3 error:(id*)arg4;
+ (id)transformedObjectForOptionalKey:(id)arg1 fromDictionary:(id)arg2 fallableTransform:(id /* block */)arg3 error:(id*)arg4;
+ (id)transformedObjectForOptionalKey:(id)arg1 fromDictionary:(id)arg2 transform:(id /* block */)arg3;
+ (bool)updateKey:(id)arg1 value:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4;
+ (bool)updateKeyPath:(id)arg1 value:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
+ (id)usingAddAndRemoveOnlyRepresentMutation:(id)arg1 error:(id*)arg2;
+ (id)usingAddAndRemoveOnlyRepresentMutations:(id)arg1 error:(id*)arg2;

- (id)init;

@end
