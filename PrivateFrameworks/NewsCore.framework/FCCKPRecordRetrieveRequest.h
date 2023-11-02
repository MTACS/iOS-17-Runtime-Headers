
@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying> {
    NSString * _clientVersionETag;
    FCCKPRecordIdentifier * _recordIdentifier;
    FCCKPRequestedFields * _requestedFields;
    NSString * _versionETag;
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
