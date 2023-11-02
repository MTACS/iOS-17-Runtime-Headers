
@interface _CPCardSectionEngagementFeedback : PBCodable <NSSecureCoding, _CPCardSectionEngagementFeedback, _CPProcessableFeedback> {
    int  _actionCardType;
    int  _actionTarget;
    _CPCardSectionForFeedback * _cardSection;
    NSString * _cardSectionId;
    _CPPunchoutForFeedback * _destination;
    bool  _destinationWasPARPunchout;
    NSString * _parPunchoutActionTarget;
    NSString * _resultId;
    unsigned long long  _timestamp;
    int  _triggerEvent;
}

@property (nonatomic) int actionCardType;
@property (nonatomic) int actionTarget;
@property (nonatomic, retain) _CPCardSectionForFeedback *cardSection;
@property (nonatomic, copy) NSString *cardSectionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _CPPunchoutForFeedback *destination;
@property (nonatomic) bool destinationWasPARPunchout;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *parPunchoutActionTarget;
@property (nonatomic, copy) NSString *resultId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (int)actionCardType;
- (int)actionTarget;
- (id)cardSection;
- (id)cardSectionId;
- (id)destination;
- (bool)destinationWasPARPunchout;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parPunchoutActionTarget;
- (bool)readFrom:(id)arg1;
- (id)resultId;
- (void)setActionCardType:(int)arg1;
- (void)setActionTarget:(int)arg1;
- (void)setCardSection:(id)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationWasPARPunchout:(bool)arg1;
- (void)setParPunchoutActionTarget:(id)arg1;
- (void)setResultId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end
