
@interface HMDMediaDestinationMessageHandler : HMDAppleMediaAccessoryMessageHandler {
    <HMDMediaDestinationMessageHandlerDataSource> * _dataSource;
    <HMDMediaDestinationMessageHandlerDelegate> * _delegate;
}

@property <HMDMediaDestinationMessageHandlerDataSource> *dataSource;
@property <HMDMediaDestinationMessageHandlerDelegate> *delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)audioGroupIdentifierInMessage:(id)arg1 error:(id*)arg2;
- (id)dataSource;
- (id)delegate;
- (void)handleMediaDestinationUpdateAudioGroupIdentifierRequestMessage:(id)arg1;
- (void)handleMediaDestinationUpdateSupportedOptionsRequestMessage:(id)arg1;
- (void)handleUpdatedDestination:(id)arg1;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 notifications:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;
- (void)sendRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)sendRequestToUpdateSupportOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedOptionsInMessage:(id)arg1 error:(id*)arg2;

@end
