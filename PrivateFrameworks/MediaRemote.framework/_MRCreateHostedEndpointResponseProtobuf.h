
@interface _MRCreateHostedEndpointResponseProtobuf : PBCodable <NSCopying> {
    NSString * _groupUID;
}

@property (nonatomic, retain) NSString *groupUID;
@property (nonatomic, readonly) bool hasGroupUID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupUID;
- (bool)hasGroupUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
