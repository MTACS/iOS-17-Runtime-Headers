
@interface CKDPTranscodeRequest : PBRequest <NSCopying> {
    NSData * _constructedAssetDownloadParameters;
    CKCodeRecordTransport * _record;
}

@property (nonatomic, retain) NSData *constructedAssetDownloadParameters;
@property (nonatomic, readonly) bool hasConstructedAssetDownloadParameters;
@property (nonatomic, readonly) bool hasRecord;
@property (nonatomic, retain) CKCodeRecordTransport *record;

- (void).cxx_destruct;
- (id)constructedAssetDownloadParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConstructedAssetDownloadParameters;
- (bool)hasRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)record;
- (void)setConstructedAssetDownloadParameters:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end
