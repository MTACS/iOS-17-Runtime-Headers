
@interface AWDSafariSharedPasswordEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int initiatedSharePasswordOutcome : 1; 
        unsigned int passwordSharingMechanism : 1; 
        unsigned int receivedSharedPasswordOutcome : 1; 
    }  _has;
    int  _initiatedSharePasswordOutcome;
    int  _passwordSharingMechanism;
    int  _receivedSharedPasswordOutcome;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasInitiatedSharePasswordOutcome;
@property (nonatomic) bool hasPasswordSharingMechanism;
@property (nonatomic) bool hasReceivedSharedPasswordOutcome;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int initiatedSharePasswordOutcome;
@property (nonatomic) int passwordSharingMechanism;
@property (nonatomic) int receivedSharedPasswordOutcome;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsInitiatedSharePasswordOutcome:(id)arg1;
- (int)StringAsPasswordSharingMechanism:(id)arg1;
- (int)StringAsReceivedSharedPasswordOutcome:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInitiatedSharePasswordOutcome;
- (bool)hasPasswordSharingMechanism;
- (bool)hasReceivedSharedPasswordOutcome;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)initiatedSharePasswordOutcome;
- (id)initiatedSharePasswordOutcomeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)passwordSharingMechanism;
- (id)passwordSharingMechanismAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)receivedSharedPasswordOutcome;
- (id)receivedSharedPasswordOutcomeAsString:(int)arg1;
- (void)setHasInitiatedSharePasswordOutcome:(bool)arg1;
- (void)setHasPasswordSharingMechanism:(bool)arg1;
- (void)setHasReceivedSharedPasswordOutcome:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInitiatedSharePasswordOutcome:(int)arg1;
- (void)setPasswordSharingMechanism:(int)arg1;
- (void)setReceivedSharedPasswordOutcome:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
