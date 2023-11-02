
@interface TelephonyUI.RecentsListItemViewHelper : _TtCs12_SwiftObject {
    void appIconImageView;
    void applicationIcon;
    void avatarViewController;
    void dateLabel;
    void detailAccessoryButton;
    void detailAccessoryTapHandler;
    void extraSubtitleLabel;
    void gridView;
    void linkView;
    void linkViewSize;
    void location;
    void messageIndicatorView;
    void occurrenceCountLabel;
    void parentView;
    void recentsCallItemStyle;
    void rootStackView;
    void senderIdentityBadgeView;
    void subtitleImageView;
    void subtitleLabel;
    void subtitleStackView;
    void titleLabel;
    void titleStackView;
    void verifiedBadgeView;
}

@property (nonatomic, readonly) UIDateLabel *dateLabel;
@property (nonatomic, readonly) UILabel *extraSubtitleLabel;
@property (nonatomic, readonly) UILabel *occurrenceCountLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (id)dateLabel;
- (void)didTapDetailAccessoryButtonWithSender:(id)arg1;
- (id)extraSubtitleLabel;
- (id)occurrenceCountLabel;
- (id)subtitleLabel;
- (id)titleLabel;

@end
