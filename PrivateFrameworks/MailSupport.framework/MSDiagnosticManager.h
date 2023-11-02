
@interface MSDiagnosticManager : NSObject <EFLoggable> {
    AWDServerConnection * _awdServerConnection;
}

@property (nonatomic, readonly) AWDServerConnection *awdServerConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)awdServerConnection;
- (id)init;
- (void)submitComposeAttachmentReport:(id)arg1;
- (void)submitFetchMetricsReport:(id)arg1;
- (void)submitMessageLoadingReport:(id)arg1;
- (void)submitSearchSessionWithSearchEngagement:(id)arg1 numberOfMessagesLeftToIndex:(unsigned long long)arg2 percentOfMessagesIndexed:(unsigned long long)arg3 emailProvider:(int)arg4;
- (bool)submitWithIdentifier:(unsigned int)arg1 metricGenerator:(id /* block */)arg2;

@end
