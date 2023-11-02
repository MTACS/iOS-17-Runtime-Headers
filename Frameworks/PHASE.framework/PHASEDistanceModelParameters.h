
@interface PHASEDistanceModelParameters : NSObject {
    PHASEDistanceModelFadeOutParameters * _fadeOutParameters;
}

@property (nonatomic, retain) PHASEDistanceModelFadeOutParameters *fadeOutParameters;

+ (id)new;

- (void).cxx_destruct;
- (id)fadeOutParameters;
- (id)init;
- (id)initInternal;
- (void)setFadeOutParameters:(id)arg1;

@end
