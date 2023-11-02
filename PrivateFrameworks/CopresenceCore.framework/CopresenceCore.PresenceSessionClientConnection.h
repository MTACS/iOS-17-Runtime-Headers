
@interface CopresenceCore.PresenceSessionClientConnection : _TtGC14CopresenceCore9XPCClientOS_24PresenceSessionInterface_ <CPPresenceSessionXPCClient> {
    void handleServerDisconnectClosure;
    void handleUpdatedPresentDevices;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
}

- (void).cxx_destruct;
- (id)init;
- (void)updatePresentDevicesWithDevices:(id)arg1;

@end
