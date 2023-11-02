
@interface ATXSuggestionReceiverPendingRefreshTracker : NSObject {
    NSMutableSet * _clientModelsThatUpdatedSuggestions;
    NSMutableDictionary * _registeredDelegatesForClientModels;
    NSMutableDictionary * _requestUUIDToClientModelCaches;
    bool  _shouldForceRefreshForAllUIs;
}

@property (nonatomic, retain) NSMutableSet *clientModelsThatUpdatedSuggestions;
@property (nonatomic, retain) NSMutableDictionary *registeredDelegatesForClientModels;
@property (nonatomic, retain) NSMutableDictionary *requestUUIDToClientModelCaches;
@property (nonatomic) bool shouldForceRefreshForAllUIs;

- (void).cxx_destruct;
- (id)clientModelsThatUpdatedSuggestions;
- (id)init;
- (id)registeredDelegatesForClientModels;
- (id)requestUUIDToClientModelCaches;
- (void)setClientModelsThatUpdatedSuggestions:(id)arg1;
- (void)setRegisteredDelegatesForClientModels:(id)arg1;
- (void)setRequestUUIDToClientModelCaches:(id)arg1;
- (void)setShouldForceRefreshForAllUIs:(bool)arg1;
- (bool)shouldForceRefreshForAllUIs;

@end
