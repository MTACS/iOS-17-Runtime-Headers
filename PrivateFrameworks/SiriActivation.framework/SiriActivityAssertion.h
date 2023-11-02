
@interface SiriActivityAssertion : NSObject <SiriAssertion> {
    NSString * _identifier;
    id /* block */  _invalidationBlock;
    NSString * _reason;
    NSString * _reference;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSString *reference;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 reference:(id)arg2 reason:(id)arg3 timestamp:(double)arg4 invalidationBlock:(id /* block */)arg5;
- (void)invalidate;
- (void)invalidatedAtTimestamp:(double)arg1;
- (bool)isValid;
- (id)reason;
- (id)reference;
- (double)timestamp;

@end
