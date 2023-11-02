
@interface WFMoveToFolderCoordinator : NSObject {
    void database;
    void delegate;
    void presentingViewController;
    void service;
    void source;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)move:(id)arg1 presentingViewController:(id)arg2;
- (void)move:(id)arg1 presentingViewController:(id)arg2 source:(int)arg3;

@end
