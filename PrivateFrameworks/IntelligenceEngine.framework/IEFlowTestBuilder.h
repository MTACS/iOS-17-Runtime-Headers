
@interface IEFlowTestBuilder : NSObject {
    struct TestCaseBuilder { 
        struct shared_ptr<siri::intelligence::TestCaseBuilder::Impl> { 
            struct Impl {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mImpl; 
    }  _mBuilder;
}

@property (nonatomic) struct TestCaseBuilder { struct shared_ptr<siri::intelligence::TestCaseBuilder::Impl> { struct Impl {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; } mBuilder;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addToTestFile:(id)arg1 flowId:(id)arg2 testName:(id)arg3 description:(id)arg4;
- (bool)addToTestFile:(id)arg1 testName:(id)arg2 description:(id)arg3;
- (void)assertResponseAllIds:(id)arg1;
- (void)assertResponseAnyId:(id)arg1;
- (void)clear;
- (int)count;
- (void)gotoResponse:(id)arg1;
- (struct TestCaseBuilder { struct shared_ptr<siri::intelligence::TestCaseBuilder::Impl> { struct Impl {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; })mBuilder;
- (void)sendEvent:(id)arg1;
- (void)setMBuilder:(struct TestCaseBuilder { struct shared_ptr<siri::intelligence::TestCaseBuilder::Impl> { struct Impl {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; })arg1;
- (void)setVariable:(id)arg1 value:(id)arg2;
- (void)switchActivity:(id)arg1;

@end
