
@interface NPKProtoStatusForShareableCredentialsResponse : PBCodable <NSCopying> {
    int  _aggregateStatus;
    NSData * _errorData;
    NSMutableArray * _updatedCredentialsDatas;
}

@property (nonatomic) int aggregateStatus;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, retain) NSMutableArray *updatedCredentialsDatas;

+ (Class)updatedCredentialsDataType;

- (void).cxx_destruct;
- (int)StringAsAggregateStatus:(id)arg1;
- (void)addUpdatedCredentialsData:(id)arg1;
- (int)aggregateStatus;
- (id)aggregateStatusAsString:(int)arg1;
- (void)clearUpdatedCredentialsDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAggregateStatus:(int)arg1;
- (void)setErrorData:(id)arg1;
- (void)setUpdatedCredentialsDatas:(id)arg1;
- (id)updatedCredentialsDataAtIndex:(unsigned long long)arg1;
- (id)updatedCredentialsDatas;
- (unsigned long long)updatedCredentialsDatasCount;
- (void)writeTo:(id)arg1;

@end
