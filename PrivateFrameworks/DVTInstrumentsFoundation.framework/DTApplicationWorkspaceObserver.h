
@interface DTApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary * _knownAppsByPath;
    NSMutableDictionary * _registrationsByToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyWithApplicationProxy:(id)arg1 addition:(bool)arg2;
- (void)_notifyWithDictionaryRepresentation:(id)arg1 addition:(bool)arg2;
- (void)_unregisterNotificationTokenInternal:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)init;
- (id)registerNotificationToken:(id)arg1 observer:(id)arg2 query:(id)arg3;
- (void)unregisterNotificationToken:(id)arg1 observer:(id)arg2;

@end
