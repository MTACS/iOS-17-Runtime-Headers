
@interface TRIFBFastFactorLevelsChanges : NSObject {
    unsigned char  _changeTypeLevels;
    unsigned char  _changeTypeNamespaceName;
    unsigned char  _changeTypeNcvs;
    unsigned char  _changeTypeSource;
    unsigned int  _replacementLevels;
    unsigned int  _replacementNamespaceName;
    unsigned int  _replacementNcvs;
    unsigned int  _replacementSource;
    unsigned char  _replacementSourceType;
}

- (void)omitNcvs;
- (void)preserveLevels;
- (void)preserveNamespaceName;
- (void)preserveNcvs;
- (void)preserveSource;
- (void)replaceLevels:(id)arg1;
- (void)replaceNamespaceName:(id)arg1;
- (void)replaceNcvs:(id)arg1;
- (void)replaceSourceWithFactorPackId:(id)arg1;
- (void)replaceSourceWithTreatmentId:(id)arg1;

@end
