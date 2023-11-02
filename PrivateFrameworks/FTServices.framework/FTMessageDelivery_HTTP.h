
@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
    IDSServerBag * _iMessageServerBag;
    IDSServerBag * _idsServerBag;
    <FTMessageDeliveryHTTPMobileNetworkManager> * _mobileNetworkManager;
    bool  _pendingRetryAfterAirplaneMode;
    <FTMessageDeliveryRemoteURLConnection> * _remoteConnection;
    <FTMessageDeliveryRemoteURLConnectionFactory> * _remoteConnectionFactory;
    id /* block */  _retryBackoffProvider;
    double  _retryTimeAfterAirplaneMode;
}

- (void).cxx_destruct;
- (void)_cleanupURLConnection;
- (void)_clearRetryTimer;
- (void)_dequeueIfNeeded;
- (void)_informDelegatesOfMessage:(id)arg1 result:(id)arg2 resultCode:(long long)arg3 error:(id)arg4;
- (void)_notifyDelegateAboutError:(id)arg1;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3;
- (bool)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (void)_serverBagLoaded:(id)arg1;
- (bool)_tryRetryMessageWithTimeInterval:(double)arg1;
- (void)_updateWiFiAssertions;
- (void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 completionBlock:(id /* block */)arg4;
- (bool)busy;
- (void)cancelMessage:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithIDSServerBag:(id)arg1;
- (id)initWithIDSServerBag:(id)arg1 iMessageServerBag:(id)arg2 remoteConnectionFactory:(id)arg3 mobileNetworkManager:(id)arg4 retryBackoffProvider:(id /* block */)arg5;
- (void)invalidate;
- (void)networkStateChanged;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (bool)sendMessage:(id)arg1;
- (bool)sendMessageAtTopOfTheQueue:(id)arg1;

@end
