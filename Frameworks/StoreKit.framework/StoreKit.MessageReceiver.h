
@interface StoreKit.MessageReceiver : SwiftNativeNSObject <SKMessageReceiverProtocol> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
    void logKey;
}

- (id)init;
- (void)pendingMessages:(id)arg1;

@end
