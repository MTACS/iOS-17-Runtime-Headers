
@interface SLLRNNFeatures : NSObject {
    bool  _lrnnProcessed;
    float  _lrnnScore;
}

@property (nonatomic) bool lrnnProcessed;
@property (nonatomic) float lrnnScore;

- (bool)lrnnProcessed;
- (float)lrnnScore;
- (void)setLrnnProcessed:(bool)arg1;
- (void)setLrnnScore:(float)arg1;

@end
