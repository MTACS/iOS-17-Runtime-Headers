
@interface WFUserNotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    NSMutableSet * _categories;
    UNUserNotificationCenter * _notificationCenter;
    NSMutableDictionary * _observers;
}

@property (nonatomic, retain) NSMutableSet *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UNUserNotificationCenter *notificationCenter;
@property (nonatomic, retain) NSMutableDictionary *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forCategory:(id)arg2;
- (id)categories;
- (id)categoryIdentifiers;
- (id)init;
- (id)notificationCenter;
- (id)observers;
- (void)registerCategoriesIfNecessary:(id)arg1;
- (void)removeNotificationsWithIdentifiers:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeStaleNotificationsWithCompletion:(id /* block */)arg1;
- (void)setCategories:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
