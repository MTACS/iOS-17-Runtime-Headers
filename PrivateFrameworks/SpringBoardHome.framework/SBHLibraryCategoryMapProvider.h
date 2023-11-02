
@interface SBHLibraryCategoryMapProvider : NSObject <SBHLibraryCategoryMapProviderSourceDelegate> {
    NSString * _cacheFilePath;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id  _clearCacheNotificationHandle;
    NSMutableSet * _forbiddenApplicationIdentifiers;
    NSArray * _inflightRefreshRequests;
    bool  _isCategoryMapOverriddenForTesting;
    SBHLibraryCategoryMap * _libraryCategoryMap;
    <SBHLibraryCategoryMapProviderSource> * _libraryCategoryMapProviderSource;
    id  _localeNotificationHandle;
    NSHashTable * _observers;
    NSMutableArray * _pendingRefreshRequests;
    bool  _refreshIsScheduled;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    long long  _sessionIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
    double  _workQueueCoalescingInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHLibraryCategoryMap *libraryCategoryMap;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) double workQueueCoalescingInterval;

+ (id)baseFilePath;
+ (id)cacheDirectory;
+ (id)categoryMapCacheFilePathForVersion:(id)arg1 source:(id)arg2;
+ (id)categoryMapFromURL:(id)arg1 error:(id*)arg2;
+ (void)clearCachesForReason:(id)arg1;
+ (unsigned long long)derivedOptionsFromArrayOfRequests:(id)arg1;

- (void).cxx_destruct;
- (void)_callbackQueue_notifyObserverCategoryMapWasRefreshedWithOptions:(unsigned long long)arg1 refreshedCategoryMap:(id)arg2;
- (void)_callbackQueue_notifyObserversBeginningRefreshSession:(long long)arg1 requests:(id)arg2;
- (void)_callbackQueue_notifyObserversCategoryMapDidntNeedRefresh;
- (void)_callbackQueue_notifyObserversCategoryMapRefreshFailedWithError:(id)arg1;
- (void)_callbackQueue_notifyObserversFinishedRefreshSession:(long long)arg1 requests:(id)arg2;
- (void)_callbackQueue_notifyObserversWillReEnqueueFailedRequests:(id)arg1;
- (void)_callbackQueue_notifyObserversWillRefresh:(long long)arg1 options:(unsigned long long)arg2;
- (void)_callbackQueue_notifyObserversWillSunsetFailedRequests:(id)arg1;
- (id)_copyOfObservers;
- (void)_kickoffInitialHydration;
- (unsigned long long)_nextSessionIdentifier;
- (void)_setupClearCacheNotification;
- (void)_setupLocaleNotification;
- (void)_workQueue_cancelAnyScheduledRefresh;
- (void)_workQueue_performNextRequest;
- (void)_workQueue_queueUpNextRequests:(id)arg1 runNow:(bool)arg2;
- (void)_workQueue_scheduleRefreshIfNotScheduled;
- (bool)_workQueue_updateLibraryCategoryMap:(id)arg1 withSessionId:(unsigned long long)arg2 shouldPersist:(bool)arg3 reason:(id)arg4;
- (void)addObserver:(id)arg1;
- (void)clearOverride;
- (bool)forbidApplicationIdentifier:(id)arg1;
- (bool)hasCachedLibraryCategoryMapOnFileSystem;
- (id)initWithSource:(id)arg1;
- (id)libraryCategoryMap;
- (void)overrideCategoryMapForTesting:(id)arg1;
- (void)overrideCategoryMapForTestingAtURL:(id)arg1 error:(id*)arg2;
- (void)removeObserver:(id)arg1;
- (id)requestLibraryCategoryMapRefreshWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)requestLibraryCategoryMapUpdateWithRefreshOptions:(unsigned long long)arg1 source:(id)arg2;
- (void)resetForbiddenApplicationIdentifiers;
- (bool)unforbidApplicationIdentifier:(id)arg1;
- (id)workQueue;
- (double)workQueueCoalescingInterval;

@end
