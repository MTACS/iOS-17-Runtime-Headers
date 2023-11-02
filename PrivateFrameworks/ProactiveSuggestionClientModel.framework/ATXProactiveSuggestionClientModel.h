
@interface ATXProactiveSuggestionClientModel : NSObject <ATXProactiveSuggestionClientModelProtocol, ATXProactiveSuggestionRealTimeProviderDelegateProtocol, NSXPCListenerDelegate> {
    <ATXProactiveSuggestionClientModelXPCInterface> * _blendingLayerServer;
    NSString * _clientModelId;
    <ATXProactiveSuggestionRealTimeProviderDelegateProtocol> * _requestDelegate;
    <ATXProactiveSuggestionClientModelXPCInterface> * _suggestionReceiver;
    NSXPCConnection * _xpcConnection;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) NSString *clientModelId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ATXProactiveSuggestionClientModelXPCInterface> *suggestionReceiver;
@property (readonly) Class superclass;

+ (long long)actionConversionTypeForClientModelType:(long long)arg1;
+ (id)clientModelIdFromClientModelType:(long long)arg1;
+ (id)clientModelIdsFromClientModelTypesArray:(id)arg1;
+ (long long)clientModelTypeFromClientModelId:(id)arg1;
+ (bool)clientModelTypeIsEligibleForShortcutConversion:(long long)arg1;
+ (bool)clientModelTypeIsShortcutConversion:(long long)arg1;
+ (void)refreshBlendingLayer;
+ (void)refreshBlendingLayerWithReason:(id)arg1;

- (void).cxx_destruct;
- (id)blendingLayerServer;
- (id)clientModelId;
- (id)clientModelMismatchErrorResponseForRequest:(id)arg1 clientModelId:(id)arg2;
- (void)dealloc;
- (id)emptyResponseForRequest:(id)arg1;
- (id)initWithClientModelId:(id)arg1 blendingLayerServer:(id)arg2;
- (id)initWithClientModelId:(id)arg1 notificationId:(id)arg2;
- (id)initWithClientModelId:(id)arg1 notificationId:(id)arg2 blendingLayerServer:(id)arg3;
- (id)initWithClientModelId:(id)arg1 requestDelegate:(id)arg2;
- (id)initWithClientModelId:(id)arg1 requestDelegate:(id)arg2 blendingLayerServer:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pingWithCompletion:(id /* block */)arg1;
- (id)remoteAsyncBlendingLayerServer;
- (void)retrieveCurrentSuggestionsWithReply:(id /* block */)arg1;
- (void)setupRemoteClientXPCConnection;
- (void)setupXPCListenerWithClientModelId:(id)arg1;
- (id)suggestionReceiver;
- (void)suggestionsForContextualActionSuggestionRequest:(id)arg1 clientModelId:(id)arg2 reply:(id /* block */)arg3;
- (void)suggestionsForIntentSuggestionRequest:(id)arg1 clientModelId:(id)arg2 reply:(id /* block */)arg3;
- (void)suggestionsForInteractionSuggestionRequest:(id)arg1 clientModelId:(id)arg2 reply:(id /* block */)arg3;
- (void)transmitSuggestionsToReceiver:(id)arg1 feedbackMetadata:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateSuggestions:(id)arg1;
- (void)updateSuggestions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSuggestions:(id)arg1 feedbackMetadata:(id)arg2;
- (void)updateSuggestions:(id)arg1 feedbackMetadata:(id)arg2 completionHandler:(id /* block */)arg3;

@end
