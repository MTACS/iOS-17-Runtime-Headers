
@interface TRIFBFastFactorLevelsBuilder : NSObject {
    struct FastFactorLevelsBuilder { struct FlatBufferBuilder {} *x1; unsigned int x2; } * _bldr;
    AFBBufferBuilder * _owner;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setLevels:(id)arg1;
- (void)setNamespaceName:(id)arg1;
- (void)setNcvs:(id)arg1;
- (void)setSourceWithFactorPackId:(id)arg1;
- (void)setSourceWithTreatmentId:(id)arg1;

@end
