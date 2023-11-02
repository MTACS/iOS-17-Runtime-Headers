
@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView {
    SEL  _timeScopeAction;
    GKTimeScopeButton * _timeScopeButton;
    id  _timeScopeTarget;
    UILabel * _titleLabel;
}

@property (nonatomic) long long timeScope;
@property (nonatomic) SEL timeScopeAction;
@property (nonatomic) GKTimeScopeButton *timeScopeButton;
@property (nonatomic) id timeScopeTarget;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) UILabel *titleLabel;

+ (double)defaultHeight;

- (void)awakeFromNib;
- (void)setTimeScope:(long long)arg1;
- (void)setTimeScopeAction:(SEL)arg1;
- (void)setTimeScopeButton:(id)arg1;
- (void)setTimeScopeTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (long long)timeScope;
- (SEL)timeScopeAction;
- (id)timeScopeButton;
- (void)timeScopePressed:(id)arg1;
- (id)timeScopeTarget;
- (id)title;
- (id)titleLabel;

@end
