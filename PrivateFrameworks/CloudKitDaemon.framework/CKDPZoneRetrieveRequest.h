
@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying> {
    NSData * _continuationMarker;
    struct { 
        unsigned int onlyFetchPCSInfo : 1; 
    }  _has;
    bool  _onlyFetchPCSInfo;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) NSData *continuationMarker;
@property (nonatomic, readonly) bool hasContinuationMarker;
@property (nonatomic) bool hasOnlyFetchPCSInfo;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic) bool onlyFetchPCSInfo;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuationMarker;
- (bool)hasOnlyFetchPCSInfo;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)onlyFetchPCSInfo;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setContinuationMarker:(id)arg1;
- (void)setHasOnlyFetchPCSInfo:(bool)arg1;
- (void)setOnlyFetchPCSInfo:(bool)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
