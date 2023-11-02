
@interface HFDictionaryCombinator : NSObject {
    NSSet * _keysToReconcile;
    NSSet * _keysToSkip;
}

@property (nonatomic, copy) NSSet *keysToReconcile;
@property (nonatomic, copy) NSSet *keysToSkip;

+ (bool)_isKindOfContainerClass:(id)arg1;

- (void).cxx_destruct;
- (id)_mergeVal1:(id)arg1 withVal2:(id)arg2;
- (void)_reconcileKey:(id)arg1 fromDictionary:(id)arg2 andDictionary:(id)arg3 intoResultDictionary:(id)arg4 withReconcilationHandler:(id /* block */)arg5;
- (id)combineResultDictionary:(id)arg1 withResultDictionary:(id)arg2 reconcilationHandler:(id /* block */)arg3;
- (id)keysToReconcile;
- (id)keysToSkip;
- (void)setKeysToReconcile:(id)arg1;
- (void)setKeysToSkip:(id)arg1;

@end