
@interface CKPopRendererView : UIView {
    void commandQueue;
    void delegate;
    void device;
    void displayLink;
    void isSoundPlayed;
    void isStarted;
    void metalLayer;
    void renderScale;
    void renderer;
    void sourceTexture;
    void startTimestamp;
}

@property (nonatomic, retain) <CKPopRendererViewDelegate> *delegate;

+ (double)duration;

- (void).cxx_destruct;
- (id)delegate;
- (void)didEnterBackgroundFrom:(id)arg1;
- (void)didMoveToWindow;
- (void)drawFrom:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2;
- (void)layoutSubviews;
- (bool)playWithSourceView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)willEnterForegroundFrom:(id)arg1;

@end
