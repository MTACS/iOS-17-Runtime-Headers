
@interface AWDWiFiSoftAPClient : PBCodable <NSCopying> {
    unsigned int  _enhancedSecurityType;
    unsigned int  _failureReason;
    bool  _familyDevice;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int enhancedSecurityType : 1; 
        unsigned int failureReason : 1; 
        unsigned int rssi : 1; 
        unsigned int familyDevice : 1; 
        unsigned int joinedByAutoHS : 1; 
        unsigned int switchedToAnotherNetwork : 1; 
    }  _has;
    bool  _joinedByAutoHS;
    unsigned int  _rssi;
    bool  _switchedToAnotherNetwork;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int enhancedSecurityType;
@property (nonatomic) unsigned int failureReason;
@property (nonatomic) bool familyDevice;
@property (nonatomic) bool hasEnhancedSecurityType;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic) bool hasFamilyDevice;
@property (nonatomic) bool hasJoinedByAutoHS;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasSwitchedToAnotherNetwork;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool joinedByAutoHS;
@property (nonatomic) unsigned int rssi;
@property (nonatomic) bool switchedToAnotherNetwork;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enhancedSecurityType;
- (unsigned int)failureReason;
- (bool)familyDevice;
- (bool)hasEnhancedSecurityType;
- (bool)hasFailureReason;
- (bool)hasFamilyDevice;
- (bool)hasJoinedByAutoHS;
- (bool)hasRssi;
- (bool)hasSwitchedToAnotherNetwork;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)joinedByAutoHS;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rssi;
- (void)setEnhancedSecurityType:(unsigned int)arg1;
- (void)setFailureReason:(unsigned int)arg1;
- (void)setFamilyDevice:(bool)arg1;
- (void)setHasEnhancedSecurityType:(bool)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)setHasFamilyDevice:(bool)arg1;
- (void)setHasJoinedByAutoHS:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasSwitchedToAnotherNetwork:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setJoinedByAutoHS:(bool)arg1;
- (void)setRssi:(unsigned int)arg1;
- (void)setSwitchedToAnotherNetwork:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)switchedToAnotherNetwork;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
