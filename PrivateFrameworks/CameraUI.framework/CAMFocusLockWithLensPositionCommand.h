
@interface CAMFocusLockWithLensPositionCommand : CAMCaptureCommand {
    id /* block */  __completionBlock;
    float  __lensPosition;
}

@property (setter=_setCompletionBlock:, nonatomic, copy) id /* block */ _completionBlock;
@property (setter=_setLensPosition:, nonatomic) float _lensPosition;

+ (float)currentLensPositionSentinel;

- (void).cxx_destruct;
- (id /* block */)_completionBlock;
- (float)_lensPosition;
- (void)_setCompletionBlock:(id /* block */)arg1;
- (void)_setLensPosition:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLensPosition:(float)arg1 completionBlock:(id /* block */)arg2;

@end
