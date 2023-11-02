
@interface HMMediaGroupProtoMediaSystemRoles : PBCodable <NSCopying> {
    NSString * _leftDestinationIdentifier;
    NSString * _rightDestinationIdentifier;
}

@property (nonatomic, readonly) bool hasLeftDestinationIdentifier;
@property (nonatomic, readonly) bool hasRightDestinationIdentifier;
@property (nonatomic, retain) NSString *leftDestinationIdentifier;
@property (nonatomic, retain) NSString *rightDestinationIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLeftDestinationIdentifier;
- (bool)hasRightDestinationIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)leftDestinationIdentifier;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rightDestinationIdentifier;
- (void)setLeftDestinationIdentifier:(id)arg1;
- (void)setRightDestinationIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
