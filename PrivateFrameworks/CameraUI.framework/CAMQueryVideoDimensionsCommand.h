
@interface CAMQueryVideoDimensionsCommand : CAMCaptureCommand {
    id /* block */  __completionBlock;
}

@property (setter=_setCompletionBlock:, nonatomic, copy) id /* block */ _completionBlock;

- (void).cxx_destruct;
- (id /* block */)_completionBlock;
- (void)_setCompletionBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompletionBlock:(id /* block */)arg1;

@end
