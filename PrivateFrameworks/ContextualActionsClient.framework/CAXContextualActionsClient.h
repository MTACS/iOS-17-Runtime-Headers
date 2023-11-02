
@interface CAXContextualActionsClient : NSObject <CAXContextualActionsXPCInterface> {
    NSString * _clientModelId;
    NSXPCConnection * _xpcConnection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithClientModelId:(id)arg1;
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg1;
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)processShortcutsSessionGivenSummary:(id)arg1;
- (void)processShortcutsSessionGivenSummary:(id)arg1 completion:(id /* block */)arg2;

@end
