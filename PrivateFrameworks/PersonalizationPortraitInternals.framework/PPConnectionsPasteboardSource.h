
@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource> {
    NSObject<OS_dispatch_semaphore> * _init_sem;
    _PASLock * _lock;
    unsigned long long  _pasteboardNotificationState;
    id  _pasteboardObserver;
    NSOperationQueue * _pbQueue;
    NSLocale * _testLocale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_mostRecentPasteboardItem;
- (void)_setMostRecentPasteboardItem:(id)arg1;
- (id)addressPasteboardTextItemFromNotification:(bool)arg1;
- (void)dealloc;
- (id)fetchedPasteboardItem;
- (id)identifier;
- (id)init;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (void)refreshMostRecentPasteboardItemFromNotification:(bool)arg1 explanationSet:(id)arg2;
- (void)setPasteboardTextForTesting:(id)arg1;
- (void)setTestLocale:(id)arg1;
- (id)supportedSemanticTags;
- (void)unsetPasteboardTextForTestingAndClearCache;
- (id)validUTTypes;

@end
