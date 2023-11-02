
@interface HMDResidentAppleMediaStateManager : HMFObject <HMDNotificationRegistryDelegate, HMFTimerDelegate> {
    <HMDResidentAppleMediaStateManagerDataSource> * _dataSource;
    <HMDResidentAppleMediaStateManagerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _mediaProfilesToRetry;
    unsigned long long  _retryCount;
    HMFTimer * _retryTimer;
    NSMutableSet * _subscribedMediaProfiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureWithNotificationRegistry:(id)arg1 notificationCenter:(id)arg2;
- (void)handleAppleMediaAccessoryReachabilityChanged:(id)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (void)mediaPropertyRegistrationsDidChangeForMediaProfiles:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
