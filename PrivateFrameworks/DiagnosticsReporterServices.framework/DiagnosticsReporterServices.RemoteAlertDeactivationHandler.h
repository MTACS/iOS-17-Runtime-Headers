
@interface DiagnosticsReporterServices.RemoteAlertDeactivationHandler : NSObject <SBSRemoteAlertHandleObserver> {
    void completion;
}

- (void).cxx_destruct;
- (id)init;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;

@end
