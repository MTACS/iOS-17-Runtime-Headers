
@interface NDAnalyticsPayloadAssembler : NSObject {
    <NDAnalyticsPayloadAssemblerConfigProvider> * _configProvider;
    unsigned long long  _maxPayloadSize;
}

@property (nonatomic, retain) <NDAnalyticsPayloadAssemblerConfigProvider> *configProvider;
@property (nonatomic) unsigned long long maxPayloadSize;

- (void).cxx_destruct;
- (void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(id /* block */)arg1;
- (void)assemblePayloadsWithEntries:(id)arg1 lastUploadDatesByContentType:(id)arg2 droppedEnvelopeReasonsToUpload:(id)arg3 envelopeSizeByEntry:(id)arg4 completion:(id /* block */)arg5;
- (id)configProvider;
- (void)determinePayloadDeliveryWindowForEntries:(id)arg1 withLastUploadDatesByContentType:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithConfigProvider:(id)arg1 maxPayloadSize:(unsigned long long)arg2;
- (unsigned long long)maxPayloadSize;
- (void)setConfigProvider:(id)arg1;
- (void)setMaxPayloadSize:(unsigned long long)arg1;

@end
