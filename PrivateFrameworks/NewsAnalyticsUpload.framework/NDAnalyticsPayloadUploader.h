
@interface NDAnalyticsPayloadUploader : NSObject {
    FCAnalyticsEndpointConnection * _endpointConnection;
    FCAsyncSerialQueue * _uploadQueue;
}

@property (nonatomic, retain) FCAnalyticsEndpointConnection *endpointConnection;
@property (nonatomic, retain) FCAsyncSerialQueue *uploadQueue;

- (void).cxx_destruct;
- (id)endpointConnection;
- (id)init;
- (id)initWithAppConfigurationManager:(id)arg1;
- (void)setEndpointConnection:(id)arg1;
- (void)setUploadQueue:(id)arg1;
- (void)uploadPayloadsForInfos:(id)arg1 withEnvelopeStore:(id)arg2 perPayloadCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)uploadQueue;

@end
