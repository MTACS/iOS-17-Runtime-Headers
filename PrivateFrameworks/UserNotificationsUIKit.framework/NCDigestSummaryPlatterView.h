
@interface NCDigestSummaryPlatterView : PLPlatterView <NCDigestSummaryDisplaying, PLContentSizeCategoryAdjusting> {
    NCDigestSummaryView * _summaryView;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, retain) <NCNotificationSummaryContentProviding> *appsSummaryContentProvider;
@property (nonatomic, retain) UIView *clearControlView;
@property (nonatomic, retain) <NCNotificationSummaryContentProviding> *communicationsSummaryContentProvider;
@property (nonatomic) unsigned long long count;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *featuredNotificationContentProviders;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *heading;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic) bool presentFeaturedNotificationsInline;
@property (nonatomic, copy) NSString *subheading;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)_configureSummaryViewIfNecessary;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)appsSummaryContentProvider;
- (id)clearControlView;
- (id)communicationsSummaryContentProvider;
- (unsigned long long)count;
- (id)date;
- (long long)dateFormatStyle;
- (void)didMoveToSuperview;
- (id)featuredNotificationContentProviders;
- (id)heading;
- (id)initWithRecipe:(long long)arg1;
- (bool)presentFeaturedNotificationsInline;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAppsSummaryContentProvider:(id)arg1;
- (void)setClearControlView:(id)arg1;
- (void)setCommunicationsSummaryContentProvider:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setFeaturedNotificationContentProviders:(id)arg1;
- (void)setHeading:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setPresentFeaturedNotificationsInline:(bool)arg1;
- (void)setSubheading:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subheading;
- (id)timeZone;
- (void)updateContent;

@end
