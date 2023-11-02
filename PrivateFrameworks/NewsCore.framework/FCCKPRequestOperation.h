
@interface FCCKPRequestOperation : PBCodable <NSCopying> {
    FCCKPRequestOperationHeader * _header;
    FCCKPQueryRetrieveRequest * _queryRetrieveRequest;
    FCCKPRecordRetrieveRequest * _recordRetrieveRequest;
    FCCKPOperation * _request;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
