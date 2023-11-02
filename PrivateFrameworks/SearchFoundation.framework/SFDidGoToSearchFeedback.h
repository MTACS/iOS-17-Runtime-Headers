
@interface SFDidGoToSearchFeedback : SFFeedback {
    unsigned long long  _endpoint;
    NSString * _input;
    unsigned long long  _triggerEvent;
}

@property (nonatomic) unsigned long long endpoint;
@property (nonatomic, copy) NSString *input;
@property (nonatomic) unsigned long long triggerEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 endpoint:(unsigned long long)arg2;
- (id)input;
- (void)setEndpoint:(unsigned long long)arg1;
- (void)setInput:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

@end
