
@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {
    void * _constantStorage;
}

- (const void*)constantValueWithFunctionConstant:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)newConstantScriptForFunction:(id)arg1 name:(id)arg2 specializedName:(id)arg3 errorMessage:(id*)arg4;
- (id)newIndexedConstantArray;
- (id)newNamedConstantArray;
- (void)reset;
- (void*)serializedConstantDataForFunction:(id)arg1 dataSize:(unsigned long long*)arg2 errorMessage:(id*)arg3;
- (void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 withName:(id)arg3;
- (void)setConstantValues:(const void*)arg1 type:(unsigned long long)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
