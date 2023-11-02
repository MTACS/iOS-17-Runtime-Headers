
@interface TRIFBCloudKitTreatmentRecordAssetChanges : NSObject {
    unsigned char  _changeTypeAssetIndex;
    unsigned char  _changeTypeContainer;
    unsigned char  _changeTypeHasCkIndex;
    unsigned char  _changeTypeTreatmentId;
    unsigned int  _replacementAssetIndex;
    unsigned char  _replacementContainer;
    bool  _replacementHasCkIndex;
    unsigned int  _replacementTreatmentId;
}

- (void)omitAssetIndex;
- (void)omitContainer;
- (void)omitHasCkIndex;
- (void)preserveAssetIndex;
- (void)preserveContainer;
- (void)preserveHasCkIndex;
- (void)preserveTreatmentId;
- (void)replaceAssetIndex:(unsigned int)arg1;
- (void)replaceContainer:(unsigned char)arg1;
- (void)replaceHasCkIndex:(bool)arg1;
- (void)replaceTreatmentId:(id)arg1;

@end
