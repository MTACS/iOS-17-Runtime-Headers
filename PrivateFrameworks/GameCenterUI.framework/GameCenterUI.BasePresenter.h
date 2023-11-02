
@interface GameCenterUI.BasePresenter : NSObject {
    void authenticationPresenter;
    void hasShownAuthenticationFlow;
    void isUpdating;
    void objectGraph;
    void onApplySnapshot;
    void onUpdatePhaseChange;
    void playerId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  snapshot;
}

- (void).cxx_destruct;
- (id)init;

@end
