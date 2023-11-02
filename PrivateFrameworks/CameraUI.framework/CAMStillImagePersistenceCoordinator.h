
@interface CAMStillImagePersistenceCoordinator : NSObject {
    NSString * __loggingPrefix;
    NSMutableDictionary * __pendingLocalPersistenceResults;
    NSMutableDictionary * __receivedCoordinationInfos;
    <CAMStillImagePersistenceCoordinatorDelegate> * _delegate;
    NSString * _loggingIdentifier;
}

@property (nonatomic, readonly) NSString *_loggingPrefix;
@property (nonatomic, readonly) NSMutableDictionary *_pendingLocalPersistenceResults;
@property (nonatomic, readonly) NSMutableDictionary *_receivedCoordinationInfos;
@property (nonatomic, readonly) <CAMStillImagePersistenceCoordinatorDelegate> *delegate;
@property (nonatomic, readonly) bool hasReceivedAllExpectedResponses;
@property (nonatomic, readonly, copy) NSString *loggingIdentifier;

- (void).cxx_destruct;
- (id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)arg1 receivedCoordinationInfos:(id)arg2;
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 processedResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 shouldPersistAsSingleAsset:(bool)arg4;
- (void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)arg1 request:(id)arg2;
- (id)_loggingPrefix;
- (id)_pendingLocalPersistenceResults;
- (unsigned int)_powerAssertionReasonForResultSpecifiers:(unsigned long long)arg1;
- (id)_receivedCoordinationInfos;
- (id)delegate;
- (bool)hasReceivedAllExpectedResponses;
- (id)initWithDelegate:(id)arg1 loggingIdentifier:(id)arg2;
- (id)loggingIdentifier;
- (void)updateForCoordinationInfo:(id)arg1 localPersistenceResult:(id)arg2 request:(id)arg3;
- (void)updateForTimeoutTimerFiredForCoordinationInfo:(id)arg1 request:(id)arg2;

@end
