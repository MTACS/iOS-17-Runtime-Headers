
@interface CAXContextualActionsSuggestionReceiver : NSObject <CAXContextualActionsXPCInterface, NSXPCListenerDelegate> {
    CAXSuggestionProvider * _suggestionProvider;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)donateSessionSummary:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg1;
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)processShortcutsSessionGivenSummary:(id)arg1;
- (void)processShortcutsSessionGivenSummary:(id)arg1 completion:(id /* block */)arg2;
- (void)setupXPCListener;
- (void)startWithBlendingLayerServer:(id)arg1;

@end
