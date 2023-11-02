
@interface HMDDeviceSetupManager : HMFObject {
    <HMDarwinNotificationProvider> * _darwinNotificationProvider;
    HMDCoreFollowUpManager * _followUpManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    int  _proxSetupNotificationToken;
    bool  _running;
}

@property (readonly) <HMDarwinNotificationProvider> *darwinNotificationProvider;
@property (readonly) HMDCoreFollowUpManager *followUpManager;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (getter=isRunning, readonly) bool running;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)darwinNotificationProvider;
- (void)dealloc;
- (id)followUpManager;
- (id)initWithNotificationCenter:(id)arg1 followUpManager:(id)arg2 darwinNotificationProvider:(id)arg3;
- (bool)isRunning;
- (id)notificationCenter;

@end
