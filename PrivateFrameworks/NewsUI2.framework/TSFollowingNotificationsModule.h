
@interface TSFollowingNotificationsModule : NSObject <TSBridgedFollowingNotificationsModuleType> {
    void resolver;
    void tracker;
}

- (void).cxx_destruct;
- (id)createViewController;
- (id)init;

@end
