
@interface _EARAcousticFeature : NSObject <NSCopying> {
    NSArray * _acousticFeatureValuePerFrame;
    double  _frameDuration;
}

@property (nonatomic, readonly, copy) NSArray *acousticFeatureValuePerFrame;
@property (nonatomic, readonly) double frameDuration;

- (void).cxx_destruct;
- (id)_initWithAcousticFeatureValues:(id)arg1 frameDuration:(float)arg2;
- (id)acousticFeatureValuePerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)frameDuration;

@end
