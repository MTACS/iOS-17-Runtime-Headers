
@interface _PIParallaxColorAnalysisResult : _NURenderResult <PIParallaxColorAnalysisResult> {
    NSArray * _dominantColors;
    double  _medianLuminance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *dominantColors;
@property (readonly) unsigned long long hash;
@property (nonatomic) double medianLuminance;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)dominantColors;
- (double)medianLuminance;
- (void)setDominantColors:(id)arg1;
- (void)setMedianLuminance:(double)arg1;

@end
