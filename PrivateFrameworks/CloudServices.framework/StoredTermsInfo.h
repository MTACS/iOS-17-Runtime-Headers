
@interface StoredTermsInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int storageVersion : 1; 
    }  _has;
    unsigned long long  _storageVersion;
    SecureBackupTermsInfo * _termsInfo;
}

@property (nonatomic) bool hasStorageVersion;
@property (nonatomic, readonly) bool hasTermsInfo;
@property (nonatomic) unsigned long long storageVersion;
@property (nonatomic, retain) SecureBackupTermsInfo *termsInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStorageVersion;
- (bool)hasTermsInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStorageVersion:(bool)arg1;
- (void)setStorageVersion:(unsigned long long)arg1;
- (void)setTermsInfo:(id)arg1;
- (unsigned long long)storageVersion;
- (id)termsInfo;
- (void)writeTo:(id)arg1;

@end
