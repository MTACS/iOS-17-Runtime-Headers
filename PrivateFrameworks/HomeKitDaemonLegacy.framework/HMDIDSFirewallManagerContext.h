
@interface HMDIDSFirewallManagerContext : HMFObject <HMFLogging> {
    IDSFirewall * _firewall;
    HMDIDSFirewallManager * _firewallManager;
    HMDHomeManager * _homeManager;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) IDSFirewall *firewall;
@property HMDIDSFirewallManager *firewallManager;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addFirewallEntries:(id)arg1;
- (void)configure;
- (id)firewall;
- (id)firewallManager;
- (void)handleHomeAddedNotification:(id)arg1;
- (void)handleHomeRemovedNotification:(id)arg1;
- (void)handleHomeUserAddedNotification:(id)arg1;
- (void)handleHomeUserRemovedNotification:(id)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1 IDSFirewall:(id)arg2 notificationCenter:(id)arg3 workQueue:(id)arg4;
- (id)notificationCenter;
- (void)registerForHomeUserNotifications;
- (void)replaceFireWallEntries:(id)arg1;
- (void)setFirewallManager:(id)arg1;
- (id)workQueue;

@end
