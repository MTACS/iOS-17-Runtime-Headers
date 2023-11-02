
@interface GKAchievementIconView : UIImageView {
    GKAchievement * _achievement;
    bool  _isDetail;
    GKAchievement * _localAchievement;
}

@property (nonatomic, retain) GKAchievement *achievement;
@property (nonatomic) bool isDetail;
@property (nonatomic, retain) GKAchievement *localAchievement;

+ (id)progressSource;
+ (id)progressSourceDetail;

- (void).cxx_destruct;
- (id)achievement;
- (void)configureImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (bool)isDetail;
- (void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(id /* block */)arg2;
- (id)localAchievement;
- (id)processProgressImage:(id)arg1 forAchievement:(id)arg2;
- (double)progressForAchievement:(id)arg1;
- (id)progressIdentifierForAchievement:(id)arg1;
- (void)setAchievement:(id)arg1;
- (void)setIsDetail:(bool)arg1;
- (void)setLocalAchievement:(id)arg1;
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;

@end
