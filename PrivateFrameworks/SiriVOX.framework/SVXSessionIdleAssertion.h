
@interface SVXSessionIdleAssertion : NSObject {
    SVXSession * _session;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) SVXSession *session;
@property (nonatomic, readonly) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTimestamp:(unsigned long long)arg1 session:(id)arg2;
- (id)session;
- (unsigned long long)timestamp;

@end
