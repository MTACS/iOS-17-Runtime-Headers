
@interface GameCenterUI.GKMultiplayerParticipantCollectionViewCell : UICollectionViewCell {
    void avatarView;
    void contentBackgroundView;
    void displaysInviteeSourceIcon;
    void focusGuide;
    void layoutMode;
    void messagesIconView;
    void nameLabel;
    void removeButton;
    void sharePlayEnabled;
    void shouldDisplaySilhouette;
    void silhouetteView;
    void statusAccessoryView;
    void subtitleLabel;
    void tapHandler;
    void vibrantRemoveButton;
    void viewStatus;
}

@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityNameLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI23GKMultiplayerStatusView *accessibilityStatusAccessoryView;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic) bool removeButtonHidden;
@property (nonatomic) bool sharePlayEnabled;
@property (nonatomic, copy) id /* block */ tapHandler;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)accessibilityNameLabel;
- (id)accessibilityStatusAccessoryView;
- (id)accessibilitySubtitleLabel;
- (void)applyWithParticipant:(id)arg1 number:(long long)arg2 isRemovingEnabled:(bool)arg3 isInvitingEnabled:(bool)arg4 layoutMode:(long long)arg5;
- (void)didTapRemoveButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (bool)removeButtonHidden;
- (void)setRemoveButtonHidden:(bool)arg1;
- (void)setSharePlayEnabled:(bool)arg1;
- (void)setTapHandler:(id /* block */)arg1;
- (bool)sharePlayEnabled;
- (id /* block */)tapHandler;

@end
