
@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable <NSCopying> {
    NSString * _downloadURL;
    long long  _downloadURLExpirationTimeSeconds;
    struct { 
        unsigned int downloadURLExpirationTimeSeconds : 1; 
        unsigned int size : 1; 
    }  _has;
    long long  _size;
}

@property (nonatomic, retain) NSString *downloadURL;
@property (nonatomic) long long downloadURLExpirationTimeSeconds;
@property (nonatomic, readonly) bool hasDownloadURL;
@property (nonatomic) bool hasDownloadURLExpirationTimeSeconds;
@property (nonatomic) bool hasSize;
@property (nonatomic) long long size;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadURL;
- (long long)downloadURLExpirationTimeSeconds;
- (bool)hasDownloadURL;
- (bool)hasDownloadURLExpirationTimeSeconds;
- (bool)hasSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDownloadURL:(id)arg1;
- (void)setDownloadURLExpirationTimeSeconds:(long long)arg1;
- (void)setHasDownloadURLExpirationTimeSeconds:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setSize:(long long)arg1;
- (long long)size;
- (void)writeTo:(id)arg1;

@end
