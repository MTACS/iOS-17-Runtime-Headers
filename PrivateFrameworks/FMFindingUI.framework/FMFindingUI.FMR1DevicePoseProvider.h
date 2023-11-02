
@interface FMFindingUI.FMR1DevicePoseProvider : PRVIODevicePoseProvider {
    void frameDelegate;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithARSession:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;

@end
