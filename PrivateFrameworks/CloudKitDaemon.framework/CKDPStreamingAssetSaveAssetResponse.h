
@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int reservedSize : 1; 
        unsigned int uploadURLExpirationTimeSeconds : 1; 
    }  _has;
    long long  _reservedSize;
    NSString * _uploadURL;
    long long  _uploadURLExpirationTimeSeconds;
}

@property (nonatomic) bool hasReservedSize;
@property (nonatomic, readonly) bool hasUploadURL;
@property (nonatomic) bool hasUploadURLExpirationTimeSeconds;
@property (nonatomic) long long reservedSize;
@property (nonatomic, retain) NSString *uploadURL;
@property (nonatomic) long long uploadURLExpirationTimeSeconds;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReservedSize;
- (bool)hasUploadURL;
- (bool)hasUploadURLExpirationTimeSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)reservedSize;
- (void)setHasReservedSize:(bool)arg1;
- (void)setHasUploadURLExpirationTimeSeconds:(bool)arg1;
- (void)setReservedSize:(long long)arg1;
- (void)setUploadURL:(id)arg1;
- (void)setUploadURLExpirationTimeSeconds:(long long)arg1;
- (id)uploadURL;
- (long long)uploadURLExpirationTimeSeconds;
- (void)writeTo:(id)arg1;

@end
