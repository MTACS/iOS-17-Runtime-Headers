
@interface NCNotificationSummaryContentProvider : NSObject <NCNotificationSummaryContentProviding> {
    bool  _iconViewLeading;
    unsigned long long  _maxNumberOfSummaryItems;
    NSArray * _notificationRequests;
    NSString * _summary;
    NSDate * _summaryDate;
    NSString * _summaryIconSymbolName;
    NSArray * _summaryIconViews;
    NSString * _summaryTitle;
    NSString * _summaryTitleFontName;
    NSArray * _titlesForSectionListsInSummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideSummaryIconViews;
@property (getter=isIconViewLeading, nonatomic, readonly) bool iconViewLeading;
@property (nonatomic) unsigned long long maxNumberOfSummaryItems;
@property (nonatomic, retain) NSArray *notificationRequests;
@property (nonatomic, readonly, copy) NSString *summary;
@property (nonatomic, copy) NSDate *summaryDate;
@property (nonatomic, copy) NSString *summaryIconSymbolName;
@property (nonatomic, readonly) NSArray *summaryIconViews;
@property (nonatomic, copy) NSString *summaryTitle;
@property (nonatomic, copy) NSString *summaryTitleFontName;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *titlesForSectionListsInSummary;

+ (id)summaryContentProviderOfType:(unsigned long long)arg1 notificationRequests:(id)arg2;

- (void).cxx_destruct;
- (id)_communicationAvatarForNotificationRequest:(id)arg1;
- (id)_iconViewForNotificationRequest:(id)arg1;
- (id)_summaryIconViewForNotificationRequest:(id)arg1;
- (id)_summaryStringForCommunicationNotificationRequest:(id)arg1;
- (id)_summaryStringForNotificationRequest:(id)arg1;
- (bool)hideSummaryIconViews;
- (bool)isIconViewLeading;
- (unsigned long long)maxNumberOfSummaryItems;
- (id)notificationRequests;
- (void)setMaxNumberOfSummaryItems:(unsigned long long)arg1;
- (void)setNotificationRequests:(id)arg1;
- (void)setSummaryDate:(id)arg1;
- (void)setSummaryIconSymbolName:(id)arg1;
- (void)setSummaryTitle:(id)arg1;
- (void)setSummaryTitleFontName:(id)arg1;
- (void)setTitlesForSectionListsInSummary:(id)arg1;
- (id)summary;
- (id)summaryDate;
- (id)summaryIconSymbolName;
- (id)summaryIconViews;
- (id)summaryTitle;
- (id)summaryTitleFontName;
- (id)titlesForSectionListsInSummary;

@end
