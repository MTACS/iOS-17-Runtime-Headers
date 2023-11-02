
@interface AMUINotificationIndicatorView : UIView {
    bool  _hideNotificationCount;
    unsigned long long  _notificationCount;
    UILabel * _notificationIndicatorLabel;
}

@property (nonatomic) bool hideNotificationCount;
@property (nonatomic) unsigned long long notificationCount;

- (void).cxx_destruct;
- (id)_attributedStringForNotificationCount:(unsigned long long)arg1;
- (void)_configureNotificationIndicatorLabelIfNecessary;
- (id)_fontForNotificationIndicatorLabel;
- (id)_notificationIndicatorImage;
- (bool)hideNotificationCount;
- (id)initWithNotificationCount:(unsigned long long)arg1;
- (void)layoutSubviews;
- (unsigned long long)notificationCount;
- (void)setHideNotificationCount:(bool)arg1;
- (void)setNotificationCount:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
