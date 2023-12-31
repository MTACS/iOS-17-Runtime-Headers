
@interface PBBProtoRemoteActivationFailureReport : PBCodable <NSCopying> {
    NSData * _activationError;
}

@property (nonatomic, retain) NSData *activationError;
@property (nonatomic, readonly) bool hasActivationError;

- (void).cxx_destruct;
- (id)activationError;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivationError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivationError:(id)arg1;
- (void)writeTo:(id)arg1;

@end
