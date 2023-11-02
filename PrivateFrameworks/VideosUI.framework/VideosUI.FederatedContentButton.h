
@interface VideosUI.FederatedContentButton : VUIButton {
    void connectIdentifier;
    void federatedAppRequiresConsent;
    void federatedChannelDictionary;
    void playIdentifier;
    void viewModel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleVPPADismisedNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;
- (void)updateTitle;

@end
