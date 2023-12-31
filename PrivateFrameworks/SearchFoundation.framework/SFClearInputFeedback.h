
@interface SFClearInputFeedback : SFFeedback {
    unsigned long long  _triggerEvent;
}

@property (nonatomic) unsigned long long triggerEvent;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

@end
