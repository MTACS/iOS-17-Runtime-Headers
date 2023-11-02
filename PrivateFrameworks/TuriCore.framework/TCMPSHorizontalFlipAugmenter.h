
@interface TCMPSHorizontalFlipAugmenter : NSObject <TCMPSImageAugmenting> {
    double  _skipProbability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double skipProbability;
@property (readonly) Class superclass;

- (id)imageAugmentedFromImage:(id)arg1 generator:(id /* block */)arg2;
- (id)init;
- (void)setSkipProbability:(double)arg1;
- (double)skipProbability;

@end
