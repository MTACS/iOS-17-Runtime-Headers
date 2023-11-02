
@interface MGNotificationObserver : NSObject <MCProfileConnectionObserver, NSCopying> {
    NSString * _argument;
    NSMutableSet * _blocks;
    union { 
        NSMutableArray *_darwinTokens; 
        struct __SCPreferences {} *_scPrefs; 
        MGFileWatcher *_fileWatcher; 
        MCProfileConnection *_mcConnection; 
        CADisplay *_mainDisplay; 
        void *_swBehaviorHandle; 
        struct __CTServerConnection {} *_ctCenter; 
        struct __SCDynamicStore {} *_scdynaStore; 
    }  _registration;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addBlock:(id /* block */)arg1;
- (void)_cancelRegistration;
- (void)_removeBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 argument:(id)arg2;
- (void)invokeBlocks;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)startDynaStoreMonitoringWithArgument:(id)arg1;

@end
