
@interface CSBackgroundComponent : CSComponent {
    double  _transitionProgress;
}

@property (nonatomic) NSNumber *style;
@property (nonatomic) double transitionProgress;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setStyle:(id)arg1;
- (void)setTransitionProgress:(double)arg1;
- (id)style;
- (id)style:(id)arg1;
- (double)transitionProgress;

@end
