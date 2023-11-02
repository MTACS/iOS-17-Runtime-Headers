
@interface HDCloudSyncCodableAttachment : PBCodable <NSCopying> {
    NSData * _assetData;
    double  _creationDate;
    NSString * _deviceName;
    NSData * _encryptionKey;
    NSString * _fileHash;
    NSString * _fileName;
    long long  _fileSize;
    struct { 
        unsigned int creationDate : 1; 
        unsigned int fileSize : 1; 
    }  _has;
    NSData * _metadata;
    NSString * _mimeType;
    NSString * _productType;
    NSString * _systemBuildVersion;
}

@property (nonatomic, retain) NSData *assetData;
@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSData *encryptionKey;
@property (nonatomic, retain) NSString *fileHash;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) long long fileSize;
@property (nonatomic, readonly) bool hasAssetData;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic, readonly) bool hasEncryptionKey;
@property (nonatomic, readonly) bool hasFileHash;
@property (nonatomic, readonly) bool hasFileName;
@property (nonatomic) bool hasFileSize;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasMimeType;
@property (nonatomic, readonly) bool hasProductType;
@property (nonatomic, readonly) bool hasSystemBuildVersion;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSString *systemBuildVersion;

- (void).cxx_destruct;
- (id)assetData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (id)encryptionKey;
- (id)fileHash;
- (id)fileName;
- (long long)fileSize;
- (bool)hasAssetData;
- (bool)hasCreationDate;
- (bool)hasDeviceName;
- (bool)hasEncryptionKey;
- (bool)hasFileHash;
- (bool)hasFileName;
- (bool)hasFileSize;
- (bool)hasMetadata;
- (bool)hasMimeType;
- (bool)hasProductType;
- (bool)hasSystemBuildVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (id)mimeType;
- (id)productType;
- (bool)readFrom:(id)arg1;
- (void)setAssetData:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setFileHash:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasFileSize:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (id)systemBuildVersion;
- (void)writeTo:(id)arg1;

@end
