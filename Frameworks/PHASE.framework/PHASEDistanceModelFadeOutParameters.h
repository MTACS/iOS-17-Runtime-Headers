
@interface PHASEDistanceModelFadeOutParameters : NSObject {
    double  _cullDistance;
}

@property (nonatomic, readonly) double cullDistance;
@property (nonatomic, readonly) double maximumDistance;

+ (id)new;

- (double)cullDistance;
- (id)init;
- (id)initWithCullDistance:(double)arg1;
- (id)initWithMaximumDistance:(double)arg1 fadeOutLength:(double)arg2 curveType:(long long)arg3;
- (double)maximumDistance;
- (void)setMaximumDistance:(double)arg1;

@end
