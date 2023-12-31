
@interface BRXPCSyncProxy : NSProxy {
    NSError * _error;
    id  _result;
    NSObject * _target;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) id result;

- (void).cxx_destruct;
- (id)error;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)result;
- (void)setBoolResult:(bool)arg1 error:(id)arg2;
- (void)setError:(id)arg1;
- (void)setObjResult:(id)arg1 error:(id)arg2;
- (void)setResult:(id)arg1;

@end
