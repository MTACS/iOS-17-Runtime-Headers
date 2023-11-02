
@interface VisionKit.ImageAnalysisInteraction : NSObject <UIInteraction> {
    void analysis;
    void delegate;
    void interaction;
    void preferredInteractionTypes;
    void proxy;
}

@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
