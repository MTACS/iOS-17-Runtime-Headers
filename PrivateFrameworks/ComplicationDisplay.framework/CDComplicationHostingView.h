
@interface CDComplicationHostingView : UIView <CLKMonochromeComplicationView> {
    _TtC19ComplicationDisplay20_ComplicationHosting * _hosting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _TtC19ComplicationDisplay20_ComplicationHosting *hosting;
@property (nonatomic) bool paused;
@property (nonatomic, copy) id /* block */ renderStatsHandler;
@property (nonatomic, readonly) bool rendersAsynchronously;
@property (nonatomic) bool shouldAccentDesaturatedView;
@property (nonatomic) bool shouldCallRenderStatsHandlerOnMainQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *viewData;

+ (id)async;
+ (id)sync;

- (void).cxx_destruct;
- (id)filterProvider;
- (id)hosting;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 async:(bool)arg2;
- (bool)paused;
- (id /* block */)renderStatsHandler;
- (bool)rendersAsynchronously;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaused:(bool)arg1;
- (void)setRenderStatsHandler:(id /* block */)arg1;
- (void)setShouldAccentDesaturatedView:(bool)arg1;
- (void)setShouldCallRenderStatsHandlerOnMainQueue:(bool)arg1;
- (void)setViewData:(id)arg1;
- (bool)shouldAccentDesaturatedView;
- (bool)shouldCallRenderStatsHandlerOnMainQueue;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)viewData;
- (void)waitForAsyncRendering;

@end
