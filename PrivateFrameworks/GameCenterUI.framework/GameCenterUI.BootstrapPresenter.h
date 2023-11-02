
@interface GameCenterUI.BootstrapPresenter : NSObject {
    void _objectGraph;
    void bootstrap;
    void isBootstrapping;
    void onDidFailBootstrapping;
    void onDidFinishBootstrapping;
}

- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
