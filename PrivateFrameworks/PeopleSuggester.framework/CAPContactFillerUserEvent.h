
@interface CAPContactFillerUserEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int highConfidenceRuleCount : 1; 
        unsigned int lowConfidenceRuleCount : 1; 
        unsigned int mediumConfidenceRuleCount : 1; 
    }  _has;
    unsigned int  _highConfidenceRuleCount;
    unsigned int  _lowConfidenceRuleCount;
    unsigned int  _mediumConfidenceRuleCount;
    unsigned int  _shareInteractionsSent;
    unsigned int  _textInteractionsReceived;
    unsigned int  _textInteractionsSent;
}

@property (nonatomic) bool hasHighConfidenceRuleCount;
@property (nonatomic) bool hasLowConfidenceRuleCount;
@property (nonatomic) bool hasMediumConfidenceRuleCount;
@property (nonatomic) unsigned int highConfidenceRuleCount;
@property (nonatomic) unsigned int lowConfidenceRuleCount;
@property (nonatomic) unsigned int mediumConfidenceRuleCount;
@property (nonatomic) unsigned int shareInteractionsSent;
@property (nonatomic) unsigned int textInteractionsReceived;
@property (nonatomic) unsigned int textInteractionsSent;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHighConfidenceRuleCount;
- (bool)hasLowConfidenceRuleCount;
- (bool)hasMediumConfidenceRuleCount;
- (unsigned long long)hash;
- (unsigned int)highConfidenceRuleCount;
- (bool)isEqual:(id)arg1;
- (unsigned int)lowConfidenceRuleCount;
- (unsigned int)mediumConfidenceRuleCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHighConfidenceRuleCount:(bool)arg1;
- (void)setHasLowConfidenceRuleCount:(bool)arg1;
- (void)setHasMediumConfidenceRuleCount:(bool)arg1;
- (void)setHighConfidenceRuleCount:(unsigned int)arg1;
- (void)setLowConfidenceRuleCount:(unsigned int)arg1;
- (void)setMediumConfidenceRuleCount:(unsigned int)arg1;
- (void)setShareInteractionsSent:(unsigned int)arg1;
- (void)setTextInteractionsReceived:(unsigned int)arg1;
- (void)setTextInteractionsSent:(unsigned int)arg1;
- (unsigned int)shareInteractionsSent;
- (unsigned int)textInteractionsReceived;
- (unsigned int)textInteractionsSent;
- (void)writeTo:(id)arg1;

@end
