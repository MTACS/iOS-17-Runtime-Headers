
@interface SPPowerAssertion : NSObject {
    unsigned int  _powerAssertionId;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _reason;
    double  _timeout;
    unsigned long long  _type;
}

@property (nonatomic) unsigned int powerAssertionId;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)_drop;
- (id)assertionName;
- (id)assertionType;
- (void)dealloc;
- (void)drop;
- (void)hold;
- (id)initWithReason:(id)arg1 type:(unsigned long long)arg2 timeout:(double)arg3;
- (unsigned int)powerAssertionId;
- (id)powerAssertionOption;
- (id)queue;
- (id)reason;
- (void)setPowerAssertionId:(unsigned int)arg1;
- (void)setQueue:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setType:(unsigned long long)arg1;
- (double)timeout;
- (unsigned long long)type;

@end
