
@interface ACDAccountNotifier : NSObject {
    NSArray * _notificationEntries;
    NSObject<OS_dispatch_queue> * _notificationEntryQueue;
}

@property (nonatomic, readonly, copy) NSArray *notificationEntries;

+ (id)allNotificationEntries;

- (void).cxx_destruct;
- (id)_pluginsRegisteredForAccount:(id)arg1;
- (id)_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3;
- (id)_provisionedDataclassesForNewAccount:(id)arg1 oldAccount:(id)arg2;
- (id)_unsafe_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2 changeType:(id)arg3;
- (void)addNotificationEntry:(id)arg1;
- (bool)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
- (bool)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithNotificationEntries:(id)arg1;
- (id)notificationEntries;
- (void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (bool)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (void)removeAllNotificationEntries;

@end
