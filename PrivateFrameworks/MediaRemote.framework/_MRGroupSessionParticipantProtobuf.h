
@interface _MRGroupSessionParticipantProtobuf : PBCodable <NSCopying> {
    bool  _connected;
    struct { 
        unsigned int connected : 1; 
    }  _has;
    NSString * _identifier;
    _MRUserIdentityProtobuf * _identity;
}

@property (nonatomic) bool connected;
@property (nonatomic) bool hasConnected;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasIdentity;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _MRUserIdentityProtobuf *identity;

- (void).cxx_destruct;
- (bool)connected;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnected;
- (bool)hasIdentifier;
- (bool)hasIdentity;
- (unsigned long long)hash;
- (id)identifier;
- (id)identity;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)writeTo:(id)arg1;

@end
