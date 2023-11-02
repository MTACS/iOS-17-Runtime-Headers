
@interface GameCenterUI.PersonalizationView : GameCenterUI.OnboardingTemplateView {
    void activityIndicator;
    void avatarContainer;
    void delegate;
    void editAvatarView;
    void gameCenterIcon;
    void nicknameContainer;
    void nicknameMessageLabel;
    void nicknameTextField;
    void primaryTrayButton;
    void reachability;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)nicknameCancelAction;
- (void)primaryAction;

@end
