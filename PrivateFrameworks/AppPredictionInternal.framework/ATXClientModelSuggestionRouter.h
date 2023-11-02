
@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary * _routingConfig;
}

- (void).cxx_destruct;
- (id)init;
- (bool)isRoutingConfigurationLoaded;
- (bool)shouldPersistCacheForClientModel:(id)arg1;
- (bool)shouldRouteClientToInfoSuggestionEngine:(id)arg1;

@end
