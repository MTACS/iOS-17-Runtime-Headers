
@interface _UIImageViewAnimationProperties : NSObject {
    double  _animationDuration;
    NSArray * _animationImages;
    long long  _animationRepeatCount;
    NSArray * _highlightedAnimationImages;
}

@property (nonatomic) double animationDuration;
@property (nonatomic, retain) NSArray *animationImages;
@property (nonatomic) long long animationRepeatCount;
@property (nonatomic, retain) NSArray *highlightedAnimationImages;

- (void).cxx_destruct;
- (double)animationDuration;
- (id)animationImages;
- (long long)animationRepeatCount;
- (id)highlightedAnimationImages;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationImages:(id)arg1;
- (void)setAnimationRepeatCount:(long long)arg1;
- (void)setHighlightedAnimationImages:(id)arg1;

@end
