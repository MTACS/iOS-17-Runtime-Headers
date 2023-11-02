
@interface TRIFBCloudKitTreatmentRecordAssetBuilder : NSObject {
    struct CloudKitTreatmentRecordAssetBuilder { struct FlatBufferBuilder {} *x1; unsigned int x2; } * _bldr;
    AFBBufferBuilder * _owner;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setAssetIndex:(unsigned int)arg1;
- (void)setContainer:(unsigned char)arg1;
- (void)setHasCkIndex:(bool)arg1;
- (void)setTreatmentId:(id)arg1;

@end
