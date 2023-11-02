
@interface NTKArgonManager : NSObject {
    <NTKArgonExtractorProviding> * _extractor;
    NSArray * _fetchers;
    <NTKArgonLocalKeyDatabaseProviding> * _keyDatabase;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <NTKArgonExtractorProviding> *extractor;
@property (nonatomic, readonly) NSArray *fetchers;
@property (nonatomic, readonly) <NTKArgonLocalKeyDatabaseProviding> *keyDatabase;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_queue_extractKnownKeyDescriptorsIfNeededWithCompletion:(id /* block */)arg1;
- (id)_queue_extractedKeyDescriptors;
- (void)addArgonManagerObserver:(id)arg1;
- (void)extractKnownKeyDescriptorsIfNeededWithCompletion:(id /* block */)arg1;
- (id)extractor;
- (id)fetchers;
- (id)initWithKeyDatabase:(id)arg1 fetchers:(id)arg2 extractor:(id)arg3;
- (id)keyDatabase;
- (id)observers;
- (void)refreshWithReason:(long long)arg1;
- (void)removeArgonManagerObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
