
@interface TRIPushServiceConnectionMultiplexer : NSObject <TRIPushServiceConnectionMultiplexing> {
    <TRIPushServiceConnectionCreating> * _connectionCreator;
    TRIServerContext * _context;
    <TRIPushServiceChannelSubscribing> * _currentConnection;
    <TRIPushServiceConnectionDelegate> * _delegate;
}

@property (nonatomic, readonly) <TRIPushServiceConnectionCreating> *connectionCreator;
@property (nonatomic, readonly) <TRIPushServiceChannelSubscribing> *currentConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TRIPushServiceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_channelIdFromExperimentId:(id)arg1;
- (id)_channelIdFromRolloutDeployment:(id)arg1;
- (id)_expectedChannelIdsForRolloutDeployments:(id)arg1 experimentIds:(id)arg2 maxChannelsAllowed:(unsigned long long)arg3;
- (bool)_isTestingIdentifier:(id)arg1;
- (void)_logFaultIfNotTestingIdentifier:(id)arg1;
- (id)connectionCreator;
- (id)currentConnection;
- (id)delegate;
- (void)ensureSubscriptionsExistOnlyForRolloutDeployments:(id)arg1 experimentIds:(id)arg2 maxChannelsAllowed:(unsigned long long)arg3;
- (id)initWithConnectionCreator:(id)arg1 connectionDelegate:(id)arg2 serverContext:(id)arg3;
- (id)initWithServerContext:(id)arg1 taskQueue:(id)arg2;
- (void)subscribeForExperimentId:(id)arg1;
- (void)subscribeForRolloutDeployment:(id)arg1;
- (void)switchToEnvironment:(unsigned char)arg1;
- (void)unsubscribeForExperimentId:(id)arg1;

@end
