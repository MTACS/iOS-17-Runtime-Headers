
@interface SFCommandEngagementFeedback : SFFeedback {
    SFButtonItem * _button;
    SFCardSection * _cardSection;
    SFCommand * _command;
    SFSearchResult * _result;
    SFResultSection * _resultSection;
    unsigned long long  _triggerEvent;
}

@property (nonatomic, retain) SFButtonItem *button;
@property (nonatomic, retain) SFCardSection *cardSection;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) SFSearchResult *result;
@property (nonatomic, retain) SFResultSection *resultSection;
@property (nonatomic) unsigned long long triggerEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)button;
- (id)cardSection;
- (id)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1 cardSection:(id)arg2;
- (id)initWithCommand:(id)arg1 cardSection:(id)arg2 result:(id)arg3 button:(id)arg4;
- (id)result;
- (id)resultSection;
- (void)setButton:(id)arg1;
- (void)setCardSection:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setResultSection:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

@end
