
@interface PKDeviceSharingCapabilitiesManager : NSObject <PKPaymentServiceDelegate> {
    NSMutableArray * _familyMembers;
    NSMutableDictionary * _fetchStatusByAppleID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockObservers;
    NSHashTable * _observers;
    PKPaymentService * _paymentService;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)_sendDeviceSharingCapabilitiesUpdated:(id)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(id)arg3;
- (void)_sendDeviceSharingCapabilitiesUpdated:(id)arg1 newSharingCapabilties:(id)arg2 forAppleID:(id)arg3;
- (id)currentFetchStatusForAppleID:(id)arg1;
- (void)didReceiveDeviceSharingCapabilities:(id)arg1 forHandle:(id)arg2;
- (void)fetchDeviceCapabilitesForAppleIDs:(id)arg1 associatedFamilyMembers:(id)arg2;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
