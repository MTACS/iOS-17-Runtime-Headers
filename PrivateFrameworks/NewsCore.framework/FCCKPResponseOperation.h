
@interface FCCKPResponseOperation : PBCodable <NSCopying> {
    struct { 
        unsigned int operationCost : 1; 
    }  _has;
    unsigned int  _operationCost;
    FCCKPQueryRetrieveResponse * _queryRetrieveResponse;
    FCCKPRecordRetrieveResponse * _recordRetrieveResponse;
    FCCKPOperation * _response;
    FCCKPResponseOperationResult * _result;
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
