
@interface COMessageProducedSession : COMessageSession {
    COMessageSessionProducer * _producer;
}

@property (nonatomic, readonly) COMessageSessionProducer *producer;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMember:(id)arg1 producer:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)producer;

@end
