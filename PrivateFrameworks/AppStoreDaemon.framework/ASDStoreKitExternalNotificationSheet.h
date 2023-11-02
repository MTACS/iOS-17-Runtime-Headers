
@interface ASDStoreKitExternalNotificationSheet : NSObject {
    ASDServiceBroker * _serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)presentSheetIfNeededForProcessHandle:(id)arg1 completion:(id /* block */)arg2;

@end
