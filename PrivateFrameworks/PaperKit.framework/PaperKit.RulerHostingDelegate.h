
@interface PaperKit.RulerHostingDelegate : NSObject <PKRulerHostingDelegate> {
    void rulerHostView;
    void sharedRuler;
}

- (void).cxx_destruct;
- (id)init;
- (bool)rulerHostWantsSharedRuler;
- (id)rulerHostingView;

@end
