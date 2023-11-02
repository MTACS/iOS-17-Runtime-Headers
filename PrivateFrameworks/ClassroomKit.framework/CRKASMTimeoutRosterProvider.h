
@interface CRKASMTimeoutRosterProvider : CRKASMRosterProviderDecoratorBase {
    NSMapTable * _completionsByTimer;
    double  _timeout;
}

@property (nonatomic, readonly) NSMapTable *completionsByTimer;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (id)completionsByTimer;
- (void)createCourseWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithRosterProvider:(id)arg1 timeout:(double)arg2;
- (void)operationDidFinishWithTimer:(id)arg1 error:(id)arg2;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)scheduleTimeoutForCompletion:(id /* block */)arg1;
- (double)timeout;
- (void)timeoutDidFire:(id)arg1;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;

@end
