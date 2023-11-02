
@interface _GEOURLStateCapture : NSObject <GEOPListStateCapturing> {
    unsigned long long  _stateCaptureHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)init;

@end
