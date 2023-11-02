
@interface NUArticleActivityManagerFactory : NSObject <NUArticleActivityFactory> {
    <NUURLHandling> * _URLHandler;
    <NUArticleActivityOptionsProvider> * _optionsProvider;
    FCReadingHistory * _readingHistory;
    FCReadingList * _readingList;
    FCSubscriptionList * _subscriptionList;
}

@property (nonatomic, readonly) <NUURLHandling> *URLHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUArticleActivityOptionsProvider> *optionsProvider;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLHandler;
- (id)activityProviderForHeadline:(id)arg1 reportConcernViewPresenter:(id)arg2 URLModifier:(id)arg3;
- (id)initWithReadingHistory:(id)arg1 readingList:(id)arg2 subscriptionList:(id)arg3 URLHandler:(id)arg4 optionsProvider:(id)arg5;
- (id)optionsProvider;
- (id)readingHistory;
- (id)readingList;
- (id)subscriptionList;

@end
