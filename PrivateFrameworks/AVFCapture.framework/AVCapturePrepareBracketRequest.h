
@interface AVCapturePrepareBracketRequest : NSObject {
    id /* block */  _completionBlock;
    FigCaptureStillImageSettings * _settings;
}

@property (readonly) id /* block */ completionBlock;
@property (readonly) FigCaptureStillImageSettings *settings;

+ (id)prepareBracketRequestWithCompletionBlock:(id /* block */)arg1 settings:(id)arg2;

- (id)_initWithCompletionBlock:(id /* block */)arg1 settings:(id)arg2;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)settings;

@end
