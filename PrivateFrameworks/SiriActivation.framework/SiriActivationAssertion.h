
@interface SiriActivationAssertion : SiriActivationSource {
    unsigned long long  _reason;
}

@property (nonatomic) unsigned long long reason;

- (void)_setConnection:(id)arg1;
- (void)configureConnection;
- (id)connection;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 reason:(unsigned long long)arg2;
- (void)invalidate;
- (void)invalidatedAtTimestamp:(double)arg1;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;

@end
