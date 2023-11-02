
@interface _COHomeKitAudioDestinationControllerListener : NSObject <HMAccessoryDelegatePrivate> {
    HMAccessory * _accessory;
    <_COHomeKitAudioDestinationControllerListenerDelegate> * _delegate;
    HMHome * _home;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <_COHomeKitAudioDestinationControllerListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessory;
- (void)accessoryDidUpdateAudioDestinationController:(id)arg1;
- (id)delegate;
- (id)home;
- (id)initWitAccessory:(id)arg1 home:(id)arg2 delegate:(id)arg3;

@end
