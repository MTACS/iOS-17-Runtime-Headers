
@interface ConversationKit.InCallControlsParticipantCell : UICollectionViewListCell {
    void $__lazy_storage_$_contentViews;
    void $__lazy_storage_$_kickMemberButton;
    void $__lazy_storage_$_lmiApproveButton;
    void $__lazy_storage_$_lmiRejectButton;
    void actionButton;
    void avatarView;
    void callDelegate;
    void cameraSymbolImage;
    void copresenceSymbolImage;
    void linkSymbolImage;
    void messagesSymbolImage;
    void nameLabel;
    void participantCellDelegate;
    void statusIcon;
    void subtitleLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewModel;
}

@property (nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *actionButton;
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *kickMemberButton;
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiApproveButton;
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiRejectButton;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;

- (void).cxx_destruct;
- (id)actionButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)kickMemberButton;
- (void)layoutSubviews;
- (id)lmiApproveButton;
- (id)lmiRejectButton;
- (id)nameLabel;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setKickMemberButton:(id)arg1;
- (void)setLmiApproveButton:(id)arg1;
- (void)setLmiRejectButton:(id)arg1;
- (id)subtitleLabel;

@end
