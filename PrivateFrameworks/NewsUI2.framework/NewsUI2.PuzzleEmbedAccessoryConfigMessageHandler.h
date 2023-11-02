
@interface NewsUI2.PuzzleEmbedAccessoryConfigMessageHandler : NSObject <SWMessageHandler> {
    void accessoryConfigDataSource;
    void delegate;
    void lastReceivedValue;
    void puzzleComponentsViewProvider;
    void scriptsManager;
}

- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)init;

@end
