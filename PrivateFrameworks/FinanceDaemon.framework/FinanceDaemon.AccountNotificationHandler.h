
@interface FinanceDaemon.AccountNotificationHandler : NSObject {
    void makeCoreDataStore;
}

+ (id)makeHandler;

- (void).cxx_destruct;
- (id)init;
- (void)primaryAppleAccountWasAdded;
- (void)primaryAppleAccountWasDeleted;

@end
