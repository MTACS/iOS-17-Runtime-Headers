
@interface _PXStoryInternalErrorRecoveryAttempter : PXStoryErrorRecoveryAttempter {
    id  _recoveryAttempter;
}

@property (nonatomic, readonly) id recoveryAttempter;

- (void).cxx_destruct;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (id)description;
- (id)initWithRecoveryAttempter:(id)arg1;
- (id)recoveryAttempter;
- (bool)respondsToSelector:(SEL)arg1;

@end
