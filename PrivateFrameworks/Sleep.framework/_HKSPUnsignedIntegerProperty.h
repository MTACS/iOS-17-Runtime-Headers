
@interface _HKSPUnsignedIntegerProperty : _HKSPNumberBoxedProperty

- (void)copyValueFromObject:(id)arg1 toObject:(id)arg2;
- (void)decodeValueForObject:(id)arg1 fromCoder:(id)arg2;
- (void)encodeValueForObject:(id)arg1 fromCoder:(id)arg2;
- (unsigned long long)unsignedIntegerValueForObject:(id)arg1;

@end
