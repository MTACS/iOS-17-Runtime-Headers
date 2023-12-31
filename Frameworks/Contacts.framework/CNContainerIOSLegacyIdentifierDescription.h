
@interface CNContainerIOSLegacyIdentifierDescription : CNContainerPropertyDescription

- (void*)ABValueForABSource:(void*)arg1;
- (id)CNValueForContainer:(id)arg1;
- (bool)isWritable;
- (id)key;
- (bool)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(struct __CFError {}**)arg3;
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (Class)valueClass;

@end
