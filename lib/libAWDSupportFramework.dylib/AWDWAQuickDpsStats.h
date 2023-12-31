
@interface AWDWAQuickDpsStats : PBCodable <NSCopying> {
    unsigned int  _awdlActivityThreshold;
    unsigned int  _ccaThreshold;
    struct { 
        unsigned int quickDpsTimeSincePreviousTriggerMinutes : 1; 
        unsigned int awdlActivityThreshold : 1; 
        unsigned int ccaThreshold : 1; 
        unsigned int probabilityThreshold : 1; 
        unsigned int rssiThreshold : 1; 
        unsigned int screenOffThreshold : 1; 
        unsigned int screenOnThreshold : 1; 
        unsigned int stallProbability : 1; 
        unsigned int suppressedReason : 1; 
        unsigned int isDpsValidationDisabled : 1; 
        unsigned int quickDpsResetRecommendation : 1; 
        unsigned int screenStateOn : 1; 
        unsigned int stallPrediction : 1; 
    }  _has;
    bool  _isDpsValidationDisabled;
    unsigned int  _probabilityThreshold;
    bool  _quickDpsResetRecommendation;
    unsigned long long  _quickDpsTimeSincePreviousTriggerMinutes;
    unsigned int  _rssiThreshold;
    unsigned int  _screenOffThreshold;
    unsigned int  _screenOnThreshold;
    bool  _screenStateOn;
    bool  _stallPrediction;
    unsigned int  _stallProbability;
    int  _suppressedReason;
}

@property (nonatomic) unsigned int awdlActivityThreshold;
@property (nonatomic) unsigned int ccaThreshold;
@property (nonatomic) bool hasAwdlActivityThreshold;
@property (nonatomic) bool hasCcaThreshold;
@property (nonatomic) bool hasIsDpsValidationDisabled;
@property (nonatomic) bool hasProbabilityThreshold;
@property (nonatomic) bool hasQuickDpsResetRecommendation;
@property (nonatomic) bool hasQuickDpsTimeSincePreviousTriggerMinutes;
@property (nonatomic) bool hasRssiThreshold;
@property (nonatomic) bool hasScreenOffThreshold;
@property (nonatomic) bool hasScreenOnThreshold;
@property (nonatomic) bool hasScreenStateOn;
@property (nonatomic) bool hasStallPrediction;
@property (nonatomic) bool hasStallProbability;
@property (nonatomic) bool hasSuppressedReason;
@property (nonatomic) bool isDpsValidationDisabled;
@property (nonatomic) unsigned int probabilityThreshold;
@property (nonatomic) bool quickDpsResetRecommendation;
@property (nonatomic) unsigned long long quickDpsTimeSincePreviousTriggerMinutes;
@property (nonatomic) unsigned int rssiThreshold;
@property (nonatomic) unsigned int screenOffThreshold;
@property (nonatomic) unsigned int screenOnThreshold;
@property (nonatomic) bool screenStateOn;
@property (nonatomic) bool stallPrediction;
@property (nonatomic) unsigned int stallProbability;
@property (nonatomic) int suppressedReason;

- (int)StringAsSuppressedReason:(id)arg1;
- (unsigned int)awdlActivityThreshold;
- (unsigned int)ccaThreshold;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAwdlActivityThreshold;
- (bool)hasCcaThreshold;
- (bool)hasIsDpsValidationDisabled;
- (bool)hasProbabilityThreshold;
- (bool)hasQuickDpsResetRecommendation;
- (bool)hasQuickDpsTimeSincePreviousTriggerMinutes;
- (bool)hasRssiThreshold;
- (bool)hasScreenOffThreshold;
- (bool)hasScreenOnThreshold;
- (bool)hasScreenStateOn;
- (bool)hasStallPrediction;
- (bool)hasStallProbability;
- (bool)hasSuppressedReason;
- (unsigned long long)hash;
- (bool)isDpsValidationDisabled;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)probabilityThreshold;
- (bool)quickDpsResetRecommendation;
- (unsigned long long)quickDpsTimeSincePreviousTriggerMinutes;
- (bool)readFrom:(id)arg1;
- (unsigned int)rssiThreshold;
- (unsigned int)screenOffThreshold;
- (unsigned int)screenOnThreshold;
- (bool)screenStateOn;
- (void)setAwdlActivityThreshold:(unsigned int)arg1;
- (void)setCcaThreshold:(unsigned int)arg1;
- (void)setHasAwdlActivityThreshold:(bool)arg1;
- (void)setHasCcaThreshold:(bool)arg1;
- (void)setHasIsDpsValidationDisabled:(bool)arg1;
- (void)setHasProbabilityThreshold:(bool)arg1;
- (void)setHasQuickDpsResetRecommendation:(bool)arg1;
- (void)setHasQuickDpsTimeSincePreviousTriggerMinutes:(bool)arg1;
- (void)setHasRssiThreshold:(bool)arg1;
- (void)setHasScreenOffThreshold:(bool)arg1;
- (void)setHasScreenOnThreshold:(bool)arg1;
- (void)setHasScreenStateOn:(bool)arg1;
- (void)setHasStallPrediction:(bool)arg1;
- (void)setHasStallProbability:(bool)arg1;
- (void)setHasSuppressedReason:(bool)arg1;
- (void)setIsDpsValidationDisabled:(bool)arg1;
- (void)setProbabilityThreshold:(unsigned int)arg1;
- (void)setQuickDpsResetRecommendation:(bool)arg1;
- (void)setQuickDpsTimeSincePreviousTriggerMinutes:(unsigned long long)arg1;
- (void)setRssiThreshold:(unsigned int)arg1;
- (void)setScreenOffThreshold:(unsigned int)arg1;
- (void)setScreenOnThreshold:(unsigned int)arg1;
- (void)setScreenStateOn:(bool)arg1;
- (void)setStallPrediction:(bool)arg1;
- (void)setStallProbability:(unsigned int)arg1;
- (void)setSuppressedReason:(int)arg1;
- (bool)stallPrediction;
- (unsigned int)stallProbability;
- (int)suppressedReason;
- (id)suppressedReasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
