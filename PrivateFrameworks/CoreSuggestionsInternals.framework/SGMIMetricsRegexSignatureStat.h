
@interface SGMIMetricsRegexSignatureStat : PBCodable <NSCopying> {
    unsigned int  _blockedWarningCount;
    NSString * _emailLanguage;
    struct { 
        unsigned int blockedWarningCount : 1; 
        unsigned int negativeEngagement : 1; 
        unsigned int noEngagement : 1; 
        unsigned int positiveEngagement : 1; 
        unsigned int type : 1; 
        unsigned int incomingMessage : 1; 
    }  _has;
    bool  _incomingMessage;
    unsigned int  _negativeEngagement;
    unsigned int  _noEngagement;
    unsigned int  _positiveEngagement;
    NSString * _regexLanguage;
    NSData * _signature;
    int  _type;
}

@property (nonatomic) unsigned int blockedWarningCount;
@property (nonatomic, retain) NSString *emailLanguage;
@property (nonatomic) bool hasBlockedWarningCount;
@property (nonatomic, readonly) bool hasEmailLanguage;
@property (nonatomic) bool hasIncomingMessage;
@property (nonatomic) bool hasNegativeEngagement;
@property (nonatomic) bool hasNoEngagement;
@property (nonatomic) bool hasPositiveEngagement;
@property (nonatomic, readonly) bool hasRegexLanguage;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic) bool hasType;
@property (nonatomic) bool incomingMessage;
@property (nonatomic) unsigned int negativeEngagement;
@property (nonatomic) unsigned int noEngagement;
@property (nonatomic) unsigned int positiveEngagement;
@property (nonatomic, retain) NSString *regexLanguage;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (unsigned int)blockedWarningCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emailLanguage;
- (bool)hasBlockedWarningCount;
- (bool)hasEmailLanguage;
- (bool)hasIncomingMessage;
- (bool)hasNegativeEngagement;
- (bool)hasNoEngagement;
- (bool)hasPositiveEngagement;
- (bool)hasRegexLanguage;
- (bool)hasSignature;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)incomingMessage;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)negativeEngagement;
- (unsigned int)noEngagement;
- (unsigned int)positiveEngagement;
- (bool)readFrom:(id)arg1;
- (id)regexLanguage;
- (void)setBlockedWarningCount:(unsigned int)arg1;
- (void)setEmailLanguage:(id)arg1;
- (void)setHasBlockedWarningCount:(bool)arg1;
- (void)setHasIncomingMessage:(bool)arg1;
- (void)setHasNegativeEngagement:(bool)arg1;
- (void)setHasNoEngagement:(bool)arg1;
- (void)setHasPositiveEngagement:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIncomingMessage:(bool)arg1;
- (void)setNegativeEngagement:(unsigned int)arg1;
- (void)setNoEngagement:(unsigned int)arg1;
- (void)setPositiveEngagement:(unsigned int)arg1;
- (void)setRegexLanguage:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setType:(int)arg1;
- (id)signature;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
