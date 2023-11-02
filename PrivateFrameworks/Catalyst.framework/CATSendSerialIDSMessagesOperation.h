
@interface CATSendSerialIDSMessagesOperation : CATOperation {
    NSString * mDestinationAddress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  mLock;
    NSArray * mMessages;
    CATIDSMessageOptions * mOptions;
    <CATIDSPrimitives> * mPrimitives;
    NSString * mSourceAppleID;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

- (void).cxx_destruct;
- (void)didSendMessagesWithError:(id)arg1;
- (id)initWithIDSPrimitives:(id)arg1 workQueue:(id)arg2 messages:(id)arg3 destinationAddress:(id)arg4 sourceAppleID:(id)arg5 options:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (void)sendMessages;

@end
