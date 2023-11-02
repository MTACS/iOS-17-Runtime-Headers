
@interface HMDAccessorySettingsBackingStoreTransactionReceiver : HMFObject <HMDBackingStoreObjectProtocol> {
    <HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end
