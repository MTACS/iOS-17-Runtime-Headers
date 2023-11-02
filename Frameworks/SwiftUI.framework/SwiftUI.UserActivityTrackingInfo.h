
@interface SwiftUI.UserActivityTrackingInfo : NSObject <NSUserActivityDelegate> {
    void activityType;
    void handlers;
    void sceneBridge;
    void userActivity;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)userActivityWillSave:(id)arg1;

@end
