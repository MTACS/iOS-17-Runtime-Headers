
@interface MediaPlaybackCore.ErrorControllerImplementation : _TtCs12_SwiftObject <MFErrorController, MFResettable> {
    void externalImplementation;
    void playerController;
    void reporter;
}

- (void)reportCriticalError:(id)arg1 forItem:(id)arg2;
- (void)resetWithReason:(id)arg1;
- (void)resolveError:(id)arg1 forItem:(id)arg2 completion:(id /* block */)arg3;

@end
