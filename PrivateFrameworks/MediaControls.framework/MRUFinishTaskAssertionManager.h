
@interface MRUFinishTaskAssertionManager : NSObject {
    MSVTimer * _autoInvalidationTimer;
    RBSAssertion * _taskAssertion;
    NSMapTable * _tokenMap;
}

@property (nonatomic, retain) MSVTimer *autoInvalidationTimer;
@property (nonatomic, retain) RBSAssertion *taskAssertion;
@property (nonatomic, readonly) NSMapTable *tokenMap;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)acquireForTaskToken:(id)arg1 withReason:(id)arg2 invalidationHandler:(id /* block */)arg3;
- (id)autoInvalidationTimer;
- (void)dealloc;
- (id)init;
- (void)releaseForTaskToken:(id)arg1;
- (void)setAutoInvalidationTimer:(id)arg1;
- (void)setTaskAssertion:(id)arg1;
- (id)taskAssertion;
- (id)tokenMap;

@end
