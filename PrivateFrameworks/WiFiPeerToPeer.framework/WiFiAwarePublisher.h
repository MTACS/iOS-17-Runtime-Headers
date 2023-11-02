
@interface WiFiAwarePublisher : NSObject <WiFiAwarePublisherXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiAwarePublishConfiguration * _configuration;
    <WiFiAwarePublisherDelegate> * _delegate;
    NSNumber * _publishID;
    WiFiP2PXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) WiFiAwarePublishConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WiFiAwarePublisherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)description;
- (id)exportedInterface;
- (id)exportedObject;
- (void)generateStatisticsReportForDataSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleError:(long long)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)publishDataConfirmedForHandle:(id)arg1 localInterfaceIndex:(unsigned int)arg2 serviceSpecificInfo:(id)arg3;
- (void)publishDataTerminatedForHandle:(id)arg1 reason:(long long)arg2;
- (void)publishFailedToStartWithError:(long long)arg1;
- (void)publishReceivedMessage:(id)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(id)arg3;
- (void)publishStartedWithInstanceID:(unsigned char)arg1;
- (void)publishTerminatedWithReason:(long long)arg1;
- (id)remoteObjectInterface;
- (void)reportIssue:(id)arg1 forDataSession:(id)arg2;
- (void)sendMessage:(id)arg1 toPeerAddress:(id)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)startConnectionUsingProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (void)terminateDataSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateDatapathServiceSpecificInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateLinkStatus:(long long)arg1 forDataSession:(id)arg2;
- (void)updateServiceSpecificInfo:(id)arg1 completionHandler:(id /* block */)arg2;

@end
