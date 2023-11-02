
@interface _MRRemoveEndpointsMessageProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _endpointUIDs;
}

@property (nonatomic, retain) NSMutableArray *endpointUIDs;

+ (Class)endpointUIDsType;

- (void).cxx_destruct;
- (void)addEndpointUIDs:(id)arg1;
- (void)clearEndpointUIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpointUIDs;
- (id)endpointUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)endpointUIDsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndpointUIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
