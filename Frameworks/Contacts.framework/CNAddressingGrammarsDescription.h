
@interface CNAddressingGrammarsDescription : CNAddressingGrammarsEncryptedDescription

- (void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNValueForContact:(id)arg1;
- (bool)applyCNValue:(id)arg1 toArray:(id)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5;
- (bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id /* block */)fromPlistTransform;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isNonnull;
- (Class)labeledValueClass;
- (id /* block */)plistTransform;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;

@end
