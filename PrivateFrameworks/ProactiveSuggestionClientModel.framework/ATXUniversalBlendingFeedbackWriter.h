
@interface ATXUniversalBlendingFeedbackWriter : NSObject {
    ATXBiomeBlendingModelStream * _blendingModelStream;
    ATXBiomeClientModelStream * _clientModelStream;
    NSObject<OS_dispatch_queue> * _internalQueue;
    ATXBiomeLightweightClientModelCacheUpdateStream * _lightWeightClientModelStream;
    ATXUniversalBiomeUIStream * _uiStream;
}

- (void).cxx_destruct;
- (void)donateBlendingModelUICacheUpdate:(id)arg1 uiConsumer:(unsigned char)arg2;
- (void)donateUIInteractionEvent:(id)arg1;
- (id)init;
- (id)initWithClientModelStream:(id)arg1 lightWeightClientModelStream:(id)arg2 blendingModelStream:(id)arg3 uiStream:(id)arg4;
- (void)sendEventToBiomeIfNeededForClientModelCacheUpdate:(id)arg1 previousUpdate:(id)arg2;

@end
