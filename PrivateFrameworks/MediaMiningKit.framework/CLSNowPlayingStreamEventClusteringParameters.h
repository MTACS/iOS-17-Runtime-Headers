
@interface CLSNowPlayingStreamEventClusteringParameters : NSObject {
    unsigned long long  _algorithm;
    double  _minimumClusteringTimeInSeconds;
}

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) double minimumClusterTimeInSeconds;

- (unsigned long long)algorithm;
- (id)init;
- (double)minimumClusterTimeInSeconds;
- (void)setAlgorithm:(unsigned long long)arg1;
- (void)setMinimumClusterTimeInSeconds:(double)arg1;

@end
