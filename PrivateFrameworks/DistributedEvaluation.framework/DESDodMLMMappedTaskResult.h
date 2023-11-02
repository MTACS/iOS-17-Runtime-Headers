
@interface DESDodMLMMappedTaskResult : DESInternalDodMLTaskResult {
    DESMMappedFile * _mmappedFile;
    DESSandBoxManager * _sandboxManager;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithJSONResult:(id)arg1 binaryResult:(id)arg2 deferred:(bool)arg3 deferralURL:(id)arg4 duration:(double)arg5;
- (id)initWithJSONResult:(id)arg1 sandboxManager:(id)arg2 mmappedFile:(id)arg3 duration:(double)arg4;

@end
