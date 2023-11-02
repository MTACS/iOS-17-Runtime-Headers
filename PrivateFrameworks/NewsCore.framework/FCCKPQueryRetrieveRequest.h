
@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying> {
    NSData * _continuationMarker;
    struct { 
        unsigned int limit : 1; 
    }  _has;
    unsigned int  _limit;
    FCCKPQuery * _query;
    FCCKPRequestedFields * _requestedFields;
    FCCKPRecordZoneIdentifier * _zoneIdentifier;
}

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end
