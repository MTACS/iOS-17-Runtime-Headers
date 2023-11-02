
@interface TRICKAssetMetadata : NSObject <NSCopying> {
    unsigned long long  _compressionMode;
    unsigned long long  _downloadSize;
    NSString * _namespaceNameForEncryptionKey;
    TRITreatmentQualifiedAssetIndex * _treatmentIndex;
    unsigned char  _type;
}

@property (nonatomic, readonly) unsigned long long compressionMode;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) NSString *namespaceNameForEncryptionKey;
@property (nonatomic, readonly) TRITreatmentQualifiedAssetIndex *treatmentIndex;
@property (nonatomic, readonly) unsigned char type;

+ (id)metadataWithType:(unsigned char)arg1 namespaceNameForEncryptionKey:(id)arg2 treatmentIndex:(id)arg3 downloadSize:(unsigned long long)arg4 compressionMode:(unsigned long long)arg5;

- (void).cxx_destruct;
- (unsigned long long)compressionMode;
- (id)copyWithReplacementCompressionMode:(unsigned long long)arg1;
- (id)copyWithReplacementDownloadSize:(unsigned long long)arg1;
- (id)copyWithReplacementNamespaceNameForEncryptionKey:(id)arg1;
- (id)copyWithReplacementTreatmentIndex:(id)arg1;
- (id)copyWithReplacementType:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)downloadSize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned char)arg1 namespaceNameForEncryptionKey:(id)arg2 treatmentIndex:(id)arg3 downloadSize:(unsigned long long)arg4 compressionMode:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMetadata:(id)arg1;
- (id)namespaceNameForEncryptionKey;
- (id)treatmentIndex;
- (unsigned char)type;

@end
