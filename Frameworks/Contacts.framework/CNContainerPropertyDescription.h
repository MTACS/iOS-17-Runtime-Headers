
@interface CNContainerPropertyDescription : NSObject

@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) Class valueClass;

- (void*)ABValueForABSource:(void*)arg1;
- (void*)ABValueFromCNValue:(id)arg1;
- (id)CNValueForContainer:(id)arg1;
- (id)CNValueFromABValue:(void*)arg1;
- (int)abPropertyID;
- (bool)isConvertibleABValue:(void*)arg1;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (bool)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2;
- (bool)isWritable;
- (id)key;
- (id)nilValue;
- (bool)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(struct __CFError {}**)arg3;
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (Class)valueClass;

@end
