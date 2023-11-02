
@interface ATXProactiveSuggestionConsumer : NSObject {
    ATXUICacheManager * _cacheManager;
    unsigned char  _consumer;
    NSXPCConnection * _xpcConnection;
}

- (void).cxx_destruct;
- (id)cachedSuggestionsForClientModelType:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConsumerSubType:(unsigned char)arg1;
- (id)layoutForRequest:(id)arg1;
- (id)remoteSyncBlendingLayerServer;
- (void)setupRemoteClientXPCConnection;
- (id)suggestionLayoutFromCache;
- (id)suggestionsForRequest:(id)arg1 limit:(id)arg2;

@end
