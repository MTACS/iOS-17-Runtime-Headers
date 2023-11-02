
@interface GKAchievementViewController : GKGameCenterViewController {
    <GKAchievementViewControllerDelegate> * _achievementDelegate;
}

@property (nonatomic) <GKAchievementViewControllerDelegate> *achievementDelegate;

- (void).cxx_destruct;
- (id)achievementDelegate;
- (void)dealloc;
- (id)init;
- (void)notifyDelegateOnWillFinish;
- (void)setAchievementDelegate:(id)arg1;

@end
