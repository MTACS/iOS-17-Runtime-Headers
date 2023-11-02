
@interface LSApplicationWorkspaceRemoteObserver : NSObject <LSInternalWorkspaceObserverProtocol, NSSecureCoding> {
    NSHashTable * _observers;
    bool  _observinglsd;
    NSObject<OS_dispatch_queue> * _progressSubscriptionsQueue;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isObservinglsd) bool observinglsd;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addLocalObserver:(id)arg1;
- (void)applicationIconDidChange:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidChangePersonas:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (unsigned long long)currentObserverCount;
- (void)databaseWasRebuilt;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isObservinglsd;
- (id)localObservers;
- (bool)messageObserversWithSelector:(SEL)arg1;
- (bool)messageObserversWithSelector:(SEL)arg1 andApps:(id)arg2;
- (bool)messageObserversWithSelector:(SEL)arg1 andApps:(id)arg2 filterLaunchProhibited:(bool)arg3;
- (void)networkUsageChanged:(bool)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)pluginsWillUninstall:(id)arg1;
- (void)removeLocalObserver:(id)arg1;
- (void)setObservinglsd:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
