
@interface UABestAppSuggestionManagerProxy : NSObject <UABestAppSuggestionManagerResponseProtocol> {
    UABestAppSuggestionManager * _weakManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property UABestAppSuggestionManager *weakManager;

- (void).cxx_destruct;
- (void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3;
- (void)setWeakManager:(id)arg1;
- (id)weakManager;

@end
