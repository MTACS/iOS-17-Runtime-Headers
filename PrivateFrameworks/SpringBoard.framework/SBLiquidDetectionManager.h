
@interface SBLiquidDetectionManager : NSObject {
    bool  _accessoryPortWet;
    bool  _detectionEnabled;
    bool  _finishedInit;
    int  _wetToken;
}

@property (getter=isAccessoryPortWet, nonatomic, readonly) bool accessoryPortWet;
@property (getter=isDetectionEnabled, nonatomic, readonly) bool detectionEnabled;
@property (getter=isLiquidDetected, nonatomic, readonly) bool liquidDetected;

+ (id)sharedInstance;
+ (bool)showStatusBarIcon;

- (void)_finishInit;
- (bool)_showStatusBarIcon;
- (void)_stateDidUpdate;
- (void)_updateStatusBar;
- (void)_updateWetState;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (bool)isAccessoryPortWet;
- (bool)isDetectionEnabled;
- (bool)isLiquidDetected;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
