
@interface _UIDICActionActivity : UIActivity {
    NSString * _actionActivityType;
    id /* block */  _activityFinishedPerformingHandler;
    NSString * _activityImageName;
    id /* block */  _activityPerformingHandler;
    NSString * _localizedTitle;
}

@property (nonatomic, copy) id /* block */ activityFinishedPerformingHandler;
@property (nonatomic, copy) id /* block */ activityPerformingHandler;

+ (long long)activityCategory;
+ (id)newLegacyDelegationActionActivityForCopy;
+ (id)newLegacyDelegationActionActivityForPrint;
+ (id)newLegacyDelegationActionActivityForSaveToCameraRoll;
+ (id)newPreviewActionActivity;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_systemImageName;
- (id /* block */)activityFinishedPerformingHandler;
- (id /* block */)activityPerformingHandler;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)description;
- (id)initWithActivityType:(id)arg1 activityImageName:(id)arg2 localizedTitle:(id)arg3;
- (void)performActivity;
- (void)setActivityFinishedPerformingHandler:(id /* block */)arg1;
- (void)setActivityPerformingHandler:(id /* block */)arg1;

@end
