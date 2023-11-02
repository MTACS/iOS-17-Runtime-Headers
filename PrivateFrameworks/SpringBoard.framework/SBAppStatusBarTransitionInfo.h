
@interface SBAppStatusBarTransitionInfo : NSObject {
    long long  _endOrientation;
    UIStatusBarStyleRequest * _endStyleRequest;
    long long  _startOrientation;
    UIStatusBarStyleRequest * _startStyleRequest;
    int  _transition;
    bool  _zoomOther;
}

@property (nonatomic) long long endOrientation;
@property (nonatomic, copy) UIStatusBarStyleRequest *endStyleRequest;
@property (nonatomic) long long startOrientation;
@property (nonatomic, copy) UIStatusBarStyleRequest *startStyleRequest;
@property (nonatomic) int transition;
@property (nonatomic) bool zoomOther;

- (void).cxx_destruct;
- (id)description;
- (long long)endOrientation;
- (id)endStyleRequest;
- (void)setEndOrientation:(long long)arg1;
- (void)setEndStyleRequest:(id)arg1;
- (void)setStartOrientation:(long long)arg1;
- (void)setStartStyleRequest:(id)arg1;
- (void)setTransition:(int)arg1;
- (void)setZoomOther:(bool)arg1;
- (long long)startOrientation;
- (id)startStyleRequest;
- (int)transition;
- (bool)zoomOther;

@end
