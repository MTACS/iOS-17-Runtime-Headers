
@interface EFSchedulerTrampoline : NSObject {
    id  _object;
    <EFScheduler> * _scheduler;
}

+ (id)trampolineWithScheduler:(id)arg1 object:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithScheduler:(id)arg1 object:(id)arg2;
- (bool)conformsToProtocol:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
