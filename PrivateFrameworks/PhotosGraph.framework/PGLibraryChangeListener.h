
@interface PGLibraryChangeListener : NSObject <PGLibraryChangeProducer, PHPhotoLibraryAvailabilityObserver, PHPhotoLibraryChangeObserver> {
    NSHashTable * _changeConsumers;
    NSObject<OS_dispatch_queue> * _changeObservationQueue;
    NSString * _clientIdentifier;
    PHPersistentChangeToken * _lastReadToken;
    bool  _libraryBecameUnavailable;
    unsigned long long  _maximumNumberOfMutationsToFetch;
    unsigned long long  _mode;
    NSCountedSet * _outstandingChangeTokenCounts;
    NSMutableOrderedSet * _outstandingChangeTokens;
    NSMapTable * _outstandingChangeTokensByConsumer;
    unsigned long long  _outstandingTokensHighWaterMark;
    unsigned long long  _outstandingTokensLowWaterMark;
    PHPhotoLibrary * _photoLibrary;
    PGLibraryChangeListenerStateStore * _stateStore;
    <PGGraphUpdateHealthRecording> * _updateHealthRecorder;
}

@property (nonatomic, readonly) NSHashTable *changeConsumers;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) PHPersistentChangeToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPersistentChangeToken *lastReadToken;
@property bool libraryBecameUnavailable;
@property (nonatomic, readonly) unsigned long long maximumNumberOfMutationsToFetch;
@property unsigned long long mode;
@property (nonatomic, readonly) NSCountedSet *outstandingChangeTokenCounts;
@property (nonatomic, readonly) NSMutableOrderedSet *outstandingChangeTokens;
@property (nonatomic, readonly) NSMapTable *outstandingChangeTokensByConsumer;
@property (nonatomic, readonly) unsigned long long outstandingTokensHighWaterMark;
@property (nonatomic, readonly) unsigned long long outstandingTokensLowWaterMark;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PGLibraryChangeListenerStateStore *stateStore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PGGraphUpdateHealthRecording> *updateHealthRecorder;

- (void).cxx_destruct;
- (void)_clearConsumerTokenState;
- (id)_consumer:(id)arg1 withChangeTokens:(id)arg2 processedChangeTokens:(id)arg3 consumedTokens:(bool)arg4;
- (bool)_distributeChangesInFetchResult:(id)arg1;
- (void)_notifyConsumersWithChangesFromFromChangeToken:(id)arg1;
- (id)changeConsumers;
- (id)clientIdentifier;
- (void)consumer:(id)arg1 didConsumeChangeTokens:(id)arg2;
- (void)consumer:(id)arg1 didIgnoreChangeTokens:(id)arg2;
- (id)currentToken;
- (id)initWithPhotoLibrary:(id)arg1 clientIdentifier:(id)arg2 analytics:(id)arg3;
- (id)lastReadToken;
- (bool)libraryBecameUnavailable;
- (unsigned long long)maximumNumberOfMutationsToFetch;
- (unsigned long long)mode;
- (id)outstandingChangeTokenCounts;
- (id)outstandingChangeTokens;
- (id)outstandingChangeTokensByConsumer;
- (unsigned long long)outstandingTokensHighWaterMark;
- (unsigned long long)outstandingTokensLowWaterMark;
- (void)persistToken:(id)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeConsumer:(id)arg1;
- (void)setLastReadToken:(id)arg1;
- (void)setLibraryBecameUnavailable:(bool)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)startListening;
- (id)stateStore;
- (void)stopListening;
- (void)unregisterChangeConsumer:(id)arg1;
- (id)updateHealthRecorder;

@end
