
@interface SFDidGoToSiteFeedback : SFFeedback {
    NSString * _input;
    unsigned long long  _triggerEvent;
}

@property (nonatomic, copy) NSString *input;
@property (nonatomic) unsigned long long triggerEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1;
- (id)input;
- (void)setInput:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

@end
