
@interface WFPBSetupSuggestedAutomationEvent : PBCodable <NSCopying> {
    bool  _completed;
    unsigned int  _currentStep;
    struct { 
        unsigned int currentStep : 1; 
        unsigned int completed : 1; 
    }  _has;
    NSString * _key;
    NSString * _suggestedAutomationIdentifier;
}

@property (nonatomic) bool completed;
@property (nonatomic) unsigned int currentStep;
@property (nonatomic) bool hasCompleted;
@property (nonatomic) bool hasCurrentStep;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSuggestedAutomationIdentifier;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *suggestedAutomationIdentifier;

- (void).cxx_destruct;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentStep;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompleted;
- (bool)hasCurrentStep;
- (bool)hasKey;
- (bool)hasSuggestedAutomationIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCurrentStep:(unsigned int)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setHasCurrentStep:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSuggestedAutomationIdentifier:(id)arg1;
- (id)suggestedAutomationIdentifier;
- (void)writeTo:(id)arg1;

@end
