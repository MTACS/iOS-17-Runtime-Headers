
@interface NUArticleActivityManager : NSObject <NUActivityProvider> {
    <NUURLHandling> * _URLHandler;
    <NUURLModifying> * _URLModifier;
    <FCHeadlineProviding> * _headline;
    <NUArticleActivityOptionsProvider> * _optionsProvider;
    FCReadingHistory * _readingHistory;
    FCReadingList * _readingList;
    <NUReportConcernViewPresenter> * _reportConcernViewPresenter;
    FCSubscriptionList * _subscriptionList;
}

@property (nonatomic, readonly) <NUURLHandling> *URLHandler;
@property (nonatomic, readonly) <NUURLModifying> *URLModifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly) <NUArticleActivityOptionsProvider> *optionsProvider;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) <NUReportConcernViewPresenter> *reportConcernViewPresenter;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLHandler;
- (id)URLModifier;
- (id)activities;
- (id)activityForType:(unsigned long long)arg1;
- (id)activityImageForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityItemSources;
- (id)activityTitleForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityTypeForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (bool)articleDislikedForHeadline:(id)arg1;
- (bool)articleLikedForHeadline:(id)arg1;
- (bool)articleSavedForHeadline:(id)arg1;
- (bool)channelMutedForHeadline:(id)arg1;
- (id)headline;
- (id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 readingList:(id)arg3 subscriptionList:(id)arg4 URLHandler:(id)arg5 reportConcernViewPresenter:(id)arg6 URLModifier:(id)arg7 optionsProvider:(id)arg8;
- (id)optionsProvider;
- (id /* block */)performBlockForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)readingHistory;
- (id)readingList;
- (id)reportConcernViewPresenter;
- (id)subscriptionList;
- (id)supportedActivities;
- (void)toggleArticleDislikeStatusForHeadline:(id)arg1;
- (void)toggleArticleLikeStatusForHeadline:(id)arg1;
- (void)toggleMuteForHeadline:(id)arg1;
- (void)toggleSaveForHeadline:(id)arg1;

@end
