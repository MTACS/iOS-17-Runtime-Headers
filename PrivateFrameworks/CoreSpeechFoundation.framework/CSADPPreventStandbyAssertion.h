
@interface CSADPPreventStandbyAssertion : NSObject {
    struct ADPAssertion { } * _adpAssertion;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _name;
}

@property (nonatomic) struct ADPAssertion { }*adpAssertion;
@property (nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)_setupADPAssertion:(id)arg1;
- (struct ADPAssertion { }*)adpAssertion;
- (id)clientQueue;
- (void)dealloc;
- (id)initWithName:(id)arg1 clientQueue:(id)arg2;
- (id)name;
- (void)setAdpAssertion:(struct ADPAssertion { }*)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setName:(id)arg1;

@end
