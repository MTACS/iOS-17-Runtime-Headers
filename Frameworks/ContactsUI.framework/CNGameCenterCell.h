
@interface CNGameCenterCell : CNLabeledCell {
    UILabel * _gameCenterLabel;
    NSString * _playerID;
    UIView * _playerView;
    UIView * _playerViewContainer;
    <CNPresenterDelegate> * _presentingDelegate;
    UIViewController * _profileViewController;
    bool  _showsGameCenterLabel;
}

@property (nonatomic, readonly) UILabel *gameCenterLabel;
@property (nonatomic, retain) NSString *playerID;
@property (nonatomic, retain) UIView *playerView;
@property (nonatomic, retain) UIView *playerViewContainer;
@property (nonatomic) <CNPresenterDelegate> *presentingDelegate;
@property (nonatomic, retain) UIViewController *profileViewController;
@property (nonatomic) bool showsGameCenterLabel;

- (void).cxx_destruct;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForVerticalLayout;
- (void)dismissProfileViewController;
- (id)gameCenterLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelView;
- (void)performDefaultAction;
- (id)playerID;
- (id)playerView;
- (id)playerViewContainer;
- (void)presentPlayerProfile;
- (id)presentingDelegate;
- (id)profileViewController;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setPlayerViewContainer:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setProfileViewController:(id)arg1;
- (void)setShowsGameCenterLabel:(bool)arg1;
- (void)setupViews;
- (bool)showsGameCenterLabel;
- (void)updateViewsWithCardGroupItem:(id)arg1;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;

@end
