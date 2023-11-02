
@interface ATXPBDigestOnboardingAppSelectionLoggingEvent : PBCodable <NSCopying> {
    bool  _addedToDigest;
    unsigned int  _avgNumBasicNotifications;
    unsigned int  _avgNumMessageNotifications;
    unsigned int  _avgNumTimeSensitiveNonMessageNotifications;
    NSString * _bundleId;
    struct { 
        unsigned int avgNumBasicNotifications : 1; 
        unsigned int avgNumMessageNotifications : 1; 
        unsigned int avgNumTimeSensitiveNonMessageNotifications : 1; 
        unsigned int rank : 1; 
        unsigned int addedToDigest : 1; 
        unsigned int wasShownInDigestOnboarding : 1; 
    }  _has;
    unsigned int  _rank;
    NSString * _sessionUUID;
    bool  _wasShownInDigestOnboarding;
}

@property (nonatomic) bool addedToDigest;
@property (nonatomic) unsigned int avgNumBasicNotifications;
@property (nonatomic) unsigned int avgNumMessageNotifications;
@property (nonatomic) unsigned int avgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) bool hasAddedToDigest;
@property (nonatomic) bool hasAvgNumBasicNotifications;
@property (nonatomic) bool hasAvgNumMessageNotifications;
@property (nonatomic) bool hasAvgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasRank;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasWasShownInDigestOnboarding;
@property (nonatomic) unsigned int rank;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) bool wasShownInDigestOnboarding;

- (void).cxx_destruct;
- (bool)addedToDigest;
- (unsigned int)avgNumBasicNotifications;
- (unsigned int)avgNumMessageNotifications;
- (unsigned int)avgNumTimeSensitiveNonMessageNotifications;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddedToDigest;
- (bool)hasAvgNumBasicNotifications;
- (bool)hasAvgNumMessageNotifications;
- (bool)hasAvgNumTimeSensitiveNonMessageNotifications;
- (bool)hasBundleId;
- (bool)hasRank;
- (bool)hasSessionUUID;
- (bool)hasWasShownInDigestOnboarding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)rank;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setAddedToDigest:(bool)arg1;
- (void)setAvgNumBasicNotifications:(unsigned int)arg1;
- (void)setAvgNumMessageNotifications:(unsigned int)arg1;
- (void)setAvgNumTimeSensitiveNonMessageNotifications:(unsigned int)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasAddedToDigest:(bool)arg1;
- (void)setHasAvgNumBasicNotifications:(bool)arg1;
- (void)setHasAvgNumMessageNotifications:(bool)arg1;
- (void)setHasAvgNumTimeSensitiveNonMessageNotifications:(bool)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setHasWasShownInDigestOnboarding:(bool)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setWasShownInDigestOnboarding:(bool)arg1;
- (bool)wasShownInDigestOnboarding;
- (void)writeTo:(id)arg1;

@end
