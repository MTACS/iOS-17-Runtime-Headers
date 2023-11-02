
@interface COMessageConsumedSession : COMessageSession {
    COMessageSessionConsumer * _consumer;
}

@property (nonatomic, readonly) COMessageSessionConsumer *consumer;

- (void).cxx_destruct;
- (id)consumer;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMember:(id)arg1 consumer:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
