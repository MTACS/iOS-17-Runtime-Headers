
@interface TeaUI.RendererEnvironment : NSObject {
    void isLiveResizing;
    void isTesting;
    void scrollView;
}

- (void).cxx_destruct;
- (void)didEndLiveResizing:(id)arg1;
- (void)didStartLiveResizing:(id)arg1;
- (id)init;

@end
