
@interface SecureBackupEscrowReason : PBCodable <NSCopying> {
    NSString * _expectedFederationID;
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
}

@property (nonatomic, retain) NSString *expectedFederationID;
@property (nonatomic, readonly) bool hasExpectedFederationID;
@property (nonatomic) bool hasReason;
@property (nonatomic) int reason;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expectedFederationID;
- (bool)hasExpectedFederationID;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setExpectedFederationID:(id)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
