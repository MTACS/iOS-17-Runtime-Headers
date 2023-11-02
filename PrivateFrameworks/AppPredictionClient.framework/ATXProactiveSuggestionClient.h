
@interface ATXProactiveSuggestionClient : NSObject <ATXProactiveSuggestionClientProtocol> {
    ATXUICacheManager * _cacheManager;
    unsigned char  _consumer;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithConsumerSubType:(unsigned char)arg1;
- (id)layoutForRequest:(id)arg1;
- (id)remoteSyncBlendingLayerServer;
- (void)setupRemoteClientXPCConnection;
- (id)spotlightSuggestionLayoutFromCache;
- (id)suggestionLayoutFromCache;
- (id)suggestionsForRequest:(id)arg1 limit:(id)arg2;

@end
