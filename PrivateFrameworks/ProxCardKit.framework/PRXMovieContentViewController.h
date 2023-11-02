
@interface PRXMovieContentViewController : PRXCardContentViewController {
    double  _fadeInDelay;
    double  _fadeInDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _movieDimensions;
    UIView * _movieView;
    double  _productHeight;
    bool  _shouldFadeInElementsOnAppear;
}

@property (nonatomic) double fadeInDelay;
@property (nonatomic) double fadeInDuration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } movieDimensions;
@property (nonatomic, readonly) UIView *movieView;
@property (nonatomic, readonly) double productHeight;
@property (nonatomic) bool shouldFadeInElementsOnAppear;

- (void).cxx_destruct;
- (void)fadeInAuxiliaryViewsOverDuration:(double)arg1 delay:(double)arg2 completion:(id /* block */)arg3;
- (double)fadeInDelay;
- (double)fadeInDuration;
- (void)hideAuxiliaryViews;
- (id)initWithMovieView:(id)arg1 movieDimensions:(struct CGSize { double x1; double x2; })arg2 productHeight:(double)arg3;
- (struct CGSize { double x1; double x2; })movieDimensions;
- (id)movieView;
- (double)productHeight;
- (void)setAuxiliaryViewsAlpha:(double)arg1;
- (void)setFadeInDelay:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setShouldFadeInElementsOnAppear:(bool)arg1;
- (bool)shouldFadeInElementsOnAppear;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
