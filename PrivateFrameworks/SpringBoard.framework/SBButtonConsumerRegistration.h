
@interface SBButtonConsumerRegistration : NSObject {
    long long  _buttonKind;
    SBButtonConsumerClient * _client;
    unsigned long long  _eventMask;
    long long  _eventPriority;
}

@property (nonatomic) long long buttonKind;
@property (nonatomic) SBButtonConsumerClient *client;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long eventPriority;

- (void).cxx_destruct;
- (long long)buttonKind;
- (id)client;
- (id)description;
- (unsigned long long)eventMask;
- (long long)eventPriority;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setButtonKind:(long long)arg1;
- (void)setClient:(id)arg1;
- (void)setEventMask:(unsigned long long)arg1;
- (void)setEventPriority:(long long)arg1;

@end
