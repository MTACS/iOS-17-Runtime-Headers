
@interface _CPMapsCardSectionEngagementFeedback : PBCodable <NSSecureCoding, _CPMapsCardSectionEngagementFeedback, _CPProcessableFeedback> {
    int  _actionCardType;
    NSString * _cardSectionId;
    _CPPunchoutForFeedback * _destination;
    int  _feedbackType;
    NSString * _resultId;
    unsigned long long  _timestamp;
    int  _triggerEvent;
}

@property (nonatomic) int actionCardType;
@property (nonatomic, copy) NSString *cardSectionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _CPPunchoutForFeedback *destination;
@property (nonatomic) int feedbackType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (int)actionCardType;
- (id)cardSectionId;
- (id)destination;
- (int)feedbackType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resultId;
- (void)setActionCardType:(int)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setResultId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end
