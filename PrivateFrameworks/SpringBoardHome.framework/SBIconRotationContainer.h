
@interface SBIconRotationContainer : UIView {
    struct SBIconCoordinate { 
        long long column; 
        long long row; 
    }  _coordinate;
    SBIconView * _endView;
    <SBIconViewProviding> * _iconViewProvider;
    NSString * _location;
    bool  _offscreen;
    SBIconView * _startView;
    long long  _transitionAnimation;
}

@property (nonatomic, readonly) struct SBIconCoordinate { long long x1; long long x2; } coordinate;
@property (nonatomic, readonly) SBIcon *endIcon;
@property (nonatomic, readonly) SBIconView *endView;
@property (nonatomic) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic, readonly, copy) NSString *location;
@property (getter=isOffscreen, nonatomic, readonly) bool offscreen;
@property (nonatomic, readonly) SBIcon *startIcon;
@property (nonatomic, readonly) SBIconView *startView;
@property (nonatomic, readonly) long long transitionAnimation;

- (void).cxx_destruct;
- (void)_configureViewIfNecessary:(id)arg1 forShowingSnapshotWhenDeactivated:(bool)arg2;
- (id)addIconViewForIcon:(id)arg1 configurationOptions:(unsigned long long)arg2;
- (void)concludeTransition;
- (struct SBIconCoordinate { long long x1; long long x2; })coordinate;
- (id)endIcon;
- (id)endView;
- (id)iconViewProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 startIcon:(id)arg2 endIcon:(id)arg3 iconViewProvider:(id)arg4 coordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg5 location:(id)arg6 transitionAnimation:(long long)arg7 offscreen:(bool)arg8;
- (bool)isOffscreen;
- (void)layoutSubviews;
- (id)location;
- (void)performTransition;
- (void)prepareToTransition;
- (void)setIconViewProvider:(id)arg1;
- (id)startIcon;
- (id)startView;
- (long long)transitionAnimation;

@end
