
@interface DYGLCaptureSessionInfo : DYCaptureSessionInfo {
    NSArray * _contextsInfo;
    NSArray * _requiredExtensions;
    bool  _wasCheckingGLErrors;
}

@property (nonatomic, readonly, retain) NSArray *contextsInfo;
@property (nonatomic, readonly, retain) NSArray *requiredExtensions;
@property (nonatomic, readonly) bool wasCheckingGLErrors;

+ (id)captureSessionInfoWithCaptureStore:(id)arg1;

- (bool)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(bool)arg2 isInternal:(bool)arg3;
- (id)contextInfoForContext:(unsigned long long)arg1;
- (id)contextsInfo;
- (void)dealloc;
- (void)deleteContexts:(const void*)arg1;
- (id)initWithCaptureStore:(id)arg1;
- (id)requiredExtensions;
- (bool)wasCheckingGLErrors;

@end
