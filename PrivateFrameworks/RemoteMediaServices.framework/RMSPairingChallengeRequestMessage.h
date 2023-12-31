
@interface RMSPairingChallengeRequestMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    RMSPairingCredentialsMessage * _pairingCredentials;
    int  _sessionIdentifier;
}

@property (nonatomic, readonly) bool hasPairingCredentials;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic, retain) RMSPairingCredentialsMessage *pairingCredentials;
@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPairingCredentials;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairingCredentials;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setPairingCredentials:(id)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
