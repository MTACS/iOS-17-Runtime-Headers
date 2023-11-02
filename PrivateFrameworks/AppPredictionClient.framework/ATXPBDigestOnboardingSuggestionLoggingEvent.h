
@interface ATXPBDigestOnboardingSuggestionLoggingEvent : PBCodable <NSCopying> {
    int  _digestOnboardingSuggestionOutcome;
    struct { 
        unsigned int timeToResolution : 1; 
        unsigned int digestOnboardingSuggestionOutcome : 1; 
    }  _has;
    NSString * _sessionUUID;
    double  _timeToResolution;
}

@property (nonatomic) int digestOnboardingSuggestionOutcome;
@property (nonatomic) bool hasDigestOnboardingSuggestionOutcome;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasTimeToResolution;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) double timeToResolution;

- (void).cxx_destruct;
- (int)StringAsDigestOnboardingSuggestionOutcome:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)digestOnboardingSuggestionOutcome;
- (id)digestOnboardingSuggestionOutcomeAsString:(int)arg1;
- (bool)hasDigestOnboardingSuggestionOutcome;
- (bool)hasSessionUUID;
- (bool)hasTimeToResolution;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setDigestOnboardingSuggestionOutcome:(int)arg1;
- (void)setHasDigestOnboardingSuggestionOutcome:(bool)arg1;
- (void)setHasTimeToResolution:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimeToResolution:(double)arg1;
- (double)timeToResolution;
- (void)writeTo:(id)arg1;

@end
