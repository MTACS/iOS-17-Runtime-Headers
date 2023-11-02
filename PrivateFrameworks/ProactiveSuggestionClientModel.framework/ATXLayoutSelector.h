
@interface ATXLayoutSelector : NSObject <ATXLayoutSelectorProtocol> {
    <ATXUniversalSuggestionDeduplicatorProtocol> * _deduplicator;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSuggestionDeduplicator:(id)arg1 hyperParameters:(id)arg2;
- (id)selectedLayoutForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2;
- (id)validLayoutsForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2;

@end
