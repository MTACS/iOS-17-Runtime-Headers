
@interface ComplicationDisplay._ComplicationHosting : UIView <CLKMonochromeComplicationView> {
    void filterProvider;
    void hostingViewController;
    void inPreview;
    void isMonochrome;
    void model;
    void paused;
    void renderStatsHandler;
    void rendersAsynchronously;
    void shouldAccentDesaturatedView;
    void shouldCallRenderStatsHandlerOnMainQueue;
    void supportsComplicationForeground;
    void view;
    void viewData;
}

@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic) bool paused;
@property (nonatomic, copy) id /* block */ renderStatsHandler;
@property (nonatomic, readonly) bool rendersAsynchronously;
@property (nonatomic) bool shouldAccentDesaturatedView;
@property (nonatomic) bool shouldCallRenderStatsHandlerOnMainQueue;
@property (nonatomic) bool supportsComplicationForeground;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, copy) NSData *viewData;

+ (id)async;
+ (id)sync;

- (void).cxx_destruct;
- (id)filterProvider;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 async:(bool)arg2;
- (bool)paused;
- (id /* block */)renderStatsHandler;
- (bool)rendersAsynchronously;
- (void)setFilterProvider:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRenderStatsHandler:(id /* block */)arg1;
- (void)setShouldAccentDesaturatedView:(bool)arg1;
- (void)setShouldCallRenderStatsHandlerOnMainQueue:(bool)arg1;
- (void)setSupportsComplicationForeground:(bool)arg1;
- (void)setViewData:(id)arg1;
- (bool)shouldAccentDesaturatedView;
- (bool)shouldCallRenderStatsHandlerOnMainQueue;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsComplicationForeground;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)view;
- (id)viewData;
- (void)waitForAsyncRendering;

@end
