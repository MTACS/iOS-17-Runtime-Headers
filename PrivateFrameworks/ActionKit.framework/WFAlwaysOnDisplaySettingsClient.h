
@interface WFAlwaysOnDisplaySettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)alwaysOnPublisher;
+ (bool)canRunIntent;
+ (void)createClientWithCompletionHandler:(id /* block */)arg1;
+ (id)filteredPublisherForAlwaysOnPublisher:(id)arg1;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)arg1;
+ (void)getReversalStateWithBookmark:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)reversalArbiter;
+ (id)reverseAlwaysOnPublisher;

- (bool)alwaysOnDisplayState;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
