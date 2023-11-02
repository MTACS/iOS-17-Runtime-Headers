
@interface AWDWiFiBlacklistingEvent : PBCodable <NSCopying> {
    unsigned int  _blacklistedDuration;
    unsigned int  _blacklistedReason;
    unsigned int  _blacklistedSubreason;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int blacklistedDuration : 1; 
        unsigned int blacklistedReason : 1; 
        unsigned int blacklistedSubreason : 1; 
        unsigned int networkFlags : 1; 
        unsigned int securityType : 1; 
        unsigned int unblacklistingReason : 1; 
    }  _has;
    unsigned int  _networkFlags;
    NSData * _oui;
    unsigned int  _securityType;
    unsigned long long  _timestamp;
    unsigned int  _unblacklistingReason;
}

@property (nonatomic) unsigned int blacklistedDuration;
@property (nonatomic) unsigned int blacklistedReason;
@property (nonatomic) unsigned int blacklistedSubreason;
@property (nonatomic) bool hasBlacklistedDuration;
@property (nonatomic) bool hasBlacklistedReason;
@property (nonatomic) bool hasBlacklistedSubreason;
@property (nonatomic) bool hasNetworkFlags;
@property (nonatomic, readonly) bool hasOui;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnblacklistingReason;
@property (nonatomic) unsigned int networkFlags;
@property (nonatomic, retain) NSData *oui;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int unblacklistingReason;

- (unsigned int)blacklistedDuration;
- (unsigned int)blacklistedReason;
- (unsigned int)blacklistedSubreason;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBlacklistedDuration;
- (bool)hasBlacklistedReason;
- (bool)hasBlacklistedSubreason;
- (bool)hasNetworkFlags;
- (bool)hasOui;
- (bool)hasSecurityType;
- (bool)hasTimestamp;
- (bool)hasUnblacklistingReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)networkFlags;
- (id)oui;
- (bool)readFrom:(id)arg1;
- (unsigned int)securityType;
- (void)setBlacklistedDuration:(unsigned int)arg1;
- (void)setBlacklistedReason:(unsigned int)arg1;
- (void)setBlacklistedSubreason:(unsigned int)arg1;
- (void)setHasBlacklistedDuration:(bool)arg1;
- (void)setHasBlacklistedReason:(bool)arg1;
- (void)setHasBlacklistedSubreason:(bool)arg1;
- (void)setHasNetworkFlags:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnblacklistingReason:(bool)arg1;
- (void)setNetworkFlags:(unsigned int)arg1;
- (void)setOui:(id)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnblacklistingReason:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)unblacklistingReason;
- (void)writeTo:(id)arg1;

@end
