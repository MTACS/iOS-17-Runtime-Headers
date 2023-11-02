
@interface XRFrameActivityBlockAgent : XRMobileAgent <XRMinorFrameAgent> {
    id /* block */  _block;
    _Atomic unsigned long long  _opPtr;
    _Atomic bool * _yieldNow;
}

@property (nonatomic) _Atomic bool*yieldNow;

- (void).cxx_destruct;
- (id)agentDiagnosticsName;
- (void)dealloc;
- (void)executeStopOnItinerary:(id)arg1;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (id)operationRepresentation;
- (void)setYieldNow:(void *)arg1; // needs 1 arg types, found 2: _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**, bool
- (_Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**)yieldNow:(SEL)arg1;

@end
