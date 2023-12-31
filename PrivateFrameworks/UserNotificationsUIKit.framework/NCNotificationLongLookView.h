
@interface NCNotificationLongLookView : PLExpandedPlatterView <NCCustomContentContainingLookView, NCNotificationContentViewDelegate, NCNotificationListDimmable, NCNotificationStaticContentAccepting, UIGestureRecognizerDelegate> {
    unsigned long long  _customContentLocation;
    bool  _hidesNotificationContent;
    UITapGestureRecognizer * _lookViewTapGestureRecognizer;
    NCNotificationContentView * _notificationContentView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (getter=isActionsHidden, nonatomic) bool actionsHidden;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic) bool clipsVisibleContentToBounds;
@property (nonatomic) double contentBottomInset;
@property (nonatomic) unsigned long long customContentLocation;
@property (nonatomic) struct CGSize { double x1; double x2; } customContentSize;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationLongLookViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIControl *dismissControl;
@property (getter=isDismissControlEnabled, nonatomic) bool dismissControlEnabled;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } dismissControlInsets;
@property (nonatomic) long long dismissControlPosition;
@property (nonatomic, copy) NSString *footerText;
@property (nonatomic) bool hasShadow;
@property (readonly) unsigned long long hash;
@property (getter=isHeaderEnabled, nonatomic) bool headerEnabled;
@property (nonatomic) bool hidesNotificationContent;
@property (nonatomic, readonly) NSArray *iconButtons;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, copy) NSAttributedString *importantAttributedText;
@property (nonatomic, copy) NSString *importantText;
@property (nonatomic, readonly, copy) UIImageConfiguration *importantTextImageConfiguration;
@property (nonatomic, retain) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (nonatomic, copy) UIAction *inlineAction;
@property (nonatomic, retain) NSArray *interfaceActions;
@property (nonatomic, readonly) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
@property (nonatomic, copy) NSArray *menuActions;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) UIImage *prominentIcon;
@property (nonatomic, copy) UIView *prominentIconView;
@property (nonatomic) bool screenCaptureProhibited;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) UIImage *subordinateIcon;
@property (nonatomic, copy) NSString *summaryText;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIImage *thumbnail;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIButton *utilityButton;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_actionsViewFrame;
- (void)_configureCustomContentView;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (struct CGSize { double x1; double x2; })_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_contentViewSize;
- (void)_layoutCustomContentView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutNotificationContentView;
- (bool)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainContentViewFrame;
- (void)_updateTopMargin;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (unsigned long long)customContentLocation;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)hidesNotificationContent;
- (void)layoutSubviews;
- (long long)lookStyle;
- (id)lookViewTapGestureRecognizer;
- (unsigned long long)maximumNumberOfPrimaryLargeTextLines;
- (unsigned long long)maximumNumberOfPrimaryTextLines;
- (unsigned long long)maximumNumberOfSecondaryLargeTextLines;
- (unsigned long long)maximumNumberOfSecondaryTextLines;
- (void)notificationContentView:(id)arg1 willInteractWithURL:(id)arg2;
- (id)primarySubtitleText;
- (id)primaryText;
- (id)prominentIcon;
- (bool)screenCaptureProhibited;
- (id)secondaryText;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCustomContentLocation:(unsigned long long)arg1;
- (void)setCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidesNotificationContent:(bool)arg1;
- (void)setMaximumNumberOfPrimaryLargeTextLines:(unsigned long long)arg1;
- (void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1;
- (void)setMaximumNumberOfSecondaryLargeTextLines:(unsigned long long)arg1;
- (void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setProminentIcon:(id)arg1;
- (void)setScreenCaptureProhibited:(bool)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSubordinateIcon:(id)arg1;
- (id)subordinateIcon;
- (void)traitCollectionDidChange:(id)arg1;

@end
