
@interface SGCuratedChangeNotifications : NSObject

+ (void)_addObserver:(id /* block */)arg1 forObjectLifetime:(id)arg2 listenerClass:(Class)arg3;
+ (id)_getListener:(Class)arg1;
+ (id)_getListenerByClassMap;
+ (void)addAddressBookObserver:(id /* block */)arg1 forObjectLifetime:(id)arg2;
+ (void)addCalendarObserver:(id /* block */)arg1 forObjectLifetime:(id)arg2;
+ (void)simulateAddressBookChange;
+ (void)simulateCalendarChange;

@end
