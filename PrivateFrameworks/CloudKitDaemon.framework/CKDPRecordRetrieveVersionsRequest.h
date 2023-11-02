
@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying> {
    CKDPAssetsToDownload * _assetsToDownload;
    NSString * _minimumVersionEtag;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPRequestedFields * _requestedFields;
}

@property (nonatomic, retain) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic, readonly) bool hasAssetsToDownload;
@property (nonatomic, readonly) bool hasMinimumVersionEtag;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, readonly) bool hasRequestedFields;
@property (nonatomic, retain) NSString *minimumVersionEtag;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) CKDPRequestedFields *requestedFields;

+ (id)options;

- (void).cxx_destruct;
- (id)assetsToDownload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetsToDownload;
- (bool)hasMinimumVersionEtag;
- (bool)hasRecordIdentifier;
- (bool)hasRequestedFields;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minimumVersionEtag;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setAssetsToDownload:(id)arg1;
- (void)setMinimumVersionEtag:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)writeTo:(id)arg1;

@end