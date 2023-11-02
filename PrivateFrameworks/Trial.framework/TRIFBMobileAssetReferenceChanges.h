
@interface TRIFBMobileAssetReferenceChanges : NSObject {
    unsigned char  _changeTypeAssetName;
    unsigned char  _changeTypeDownloadSize;
    unsigned char  _changeTypeFileType;
    unsigned char  _changeTypeIsOnDemand;
    unsigned char  _changeTypeSpecifier;
    unsigned char  _changeTypeType;
    unsigned char  _changeTypeVersion;
    unsigned int  _replacementAssetName;
    unsigned long long  _replacementDownloadSize;
    unsigned char  _replacementFileType;
    bool  _replacementIsOnDemand;
    unsigned int  _replacementSpecifier;
    unsigned int  _replacementType;
    unsigned int  _replacementVersion;
}

- (void)omitAssetName;
- (void)omitDownloadSize;
- (void)omitFileType;
- (void)omitIsOnDemand;
- (void)preserveAssetName;
- (void)preserveDownloadSize;
- (void)preserveFileType;
- (void)preserveIsOnDemand;
- (void)preserveSpecifier;
- (void)preserveType;
- (void)preserveVersion;
- (void)replaceAssetName:(id)arg1;
- (void)replaceDownloadSize:(unsigned long long)arg1;
- (void)replaceFileType:(unsigned char)arg1;
- (void)replaceIsOnDemand:(bool)arg1;
- (void)replaceSpecifier:(id)arg1;
- (void)replaceType:(id)arg1;
- (void)replaceVersion:(id)arg1;

@end
