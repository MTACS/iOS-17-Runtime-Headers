
@interface TRIFBFactorLevelBuilder : NSObject {
    struct FactorLevelBuilder { struct FlatBufferBuilder {} *x1; unsigned int x2; } * _bldr;
    AFBBufferBuilder * _owner;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setAlias:(id)arg1;
- (void)setCacheKey:(unsigned int)arg1;
- (void)setFactorId:(id)arg1;
- (void)setFactorNamespaceName:(id)arg1;
- (void)setLevelWithBoolVal:(id)arg1;
- (void)setLevelWithDoubleVal:(id)arg1;
- (void)setLevelWithInt64Val:(id)arg1;
- (void)setLevelWithMaRefVal:(id)arg1;
- (void)setLevelWithStringVal:(id)arg1;
- (void)setLevelWithTrialAssetVal:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNamespaceId:(unsigned int)arg1;

@end
