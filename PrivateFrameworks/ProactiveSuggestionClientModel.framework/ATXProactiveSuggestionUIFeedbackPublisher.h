
@interface ATXProactiveSuggestionUIFeedbackPublisher : NSObject {
    BPSPublisher<BMBookmarkablePublisher> * _blendingModelPublisher;
    BPSPublisher<BMBookmarkablePublisher> * _clientModelPublisher;
    BPSPublisher<BMBookmarkablePublisher> * _contextPublisher;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
    BPSPublisher<BMBookmarkablePublisher> * _uiPublisher;
    NSSet * _validClientModelIds;
    unsigned char  _validUICacheConsumerSubType;
}

@property (nonatomic, retain) BPSPublisher<BMBookmarkablePublisher> *blendingModelPublisher;
@property (nonatomic, retain) BPSPublisher<BMBookmarkablePublisher> *clientModelPublisher;
@property (nonatomic, retain) BPSPublisher<BMBookmarkablePublisher> *contextPublisher;
@property (nonatomic, retain) <ATXUniversalBlendingLayerHyperParametersProtocol> *hyperParameters;
@property (nonatomic, retain) BPSPublisher<BMBookmarkablePublisher> *uiPublisher;
@property (nonatomic, retain) NSSet *validClientModelIds;
@property (nonatomic) unsigned char validUICacheConsumerSubType;

- (void).cxx_destruct;
- (id)_filteredBlendingCacheUpdatePublisher:(id)arg1;
- (id)_filteredCacheUpdateClientModelPublisher:(id)arg1;
- (id)_timestampFromEvent:(id)arg1;
- (id)blendingModelPublisher;
- (id)clientModelPublisher;
- (id)clientModelsToConsider;
- (id)contextPublisher;
- (id)hyperParameters;
- (id)initWithClientModelPublisher:(id)arg1 blendingModelPublisher:(id)arg2 uiPublisher:(id)arg3 contextPublisher:(id)arg4 validUICacheConsumerSubType:(unsigned char)arg5 validClientModelIds:(id)arg6 hyperParameters:(id)arg7;
- (id)mergedBlendingClientContextPublisher;
- (void)setBlendingModelPublisher:(id)arg1;
- (void)setClientModelPublisher:(id)arg1;
- (void)setContextPublisher:(id)arg1;
- (void)setHyperParameters:(id)arg1;
- (void)setUiPublisher:(id)arg1;
- (void)setValidClientModelIds:(id)arg1;
- (void)setValidUICacheConsumerSubType:(unsigned char)arg1;
- (id)uiFeedbackPublisher;
- (id)uiFeedbackSessionPublisherWithCorrelateHandler:(id)arg1;
- (id)uiPublisher;
- (id)validClientModelIds;
- (unsigned char)validUICacheConsumerSubType;

@end
