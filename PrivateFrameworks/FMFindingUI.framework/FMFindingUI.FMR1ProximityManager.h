
@interface FMFindingUI.FMR1ProximityManager : NSObject {
    void applicationIsInBackground;
    void contexts;
    void itemLocalizersCount;
    void serialQueue;
    void subscriptions;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)description;
- (id)init;

@end
