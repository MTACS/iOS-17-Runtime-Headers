
@interface SiriInteractive.SnippetController : NSObject <VRXInteractionDelegate> {
    void _cancellables;
    void _scene;
    void context;
    void modal;
    void parent;
}

- (void).cxx_destruct;
- (void)didEndEditing;
- (id)init;
- (void)performAceCommand:(id)arg1;
- (void)willBeginEditing;

@end
