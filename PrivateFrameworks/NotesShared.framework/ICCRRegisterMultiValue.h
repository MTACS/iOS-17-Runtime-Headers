
@interface ICCRRegisterMultiValue : ICCRRegister {
    NSSet * _cachedValues;
    ICCRSet * _values;
}

@property (nonatomic, retain) NSSet *cachedValues;
@property (nonatomic, retain) ICCRSet *values;

- (void).cxx_destruct;
- (id)allContents;
- (id)cachedValues;
- (id)contents;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeWithICCRCoder:(id)arg1;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (id)initWithICCRCoder:(id)arg1;
- (id)initWithValues:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)mergeWithRegisterMultiValue:(id)arg1;
- (void)setCachedValues:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;
- (void)walkGraph:(id /* block */)arg1;

@end
