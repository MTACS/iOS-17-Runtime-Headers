
@interface HKAudiogramChartData : NSObject <HKGraphSeriesChartData> {
    double  _frequencyHertz;
    bool  _isLeftEar;
    double  _sensitivityDBHL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double frequencyHertz;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLeftEar;
@property (nonatomic, readonly) double sensitivityDBHL;
@property (readonly) Class superclass;

- (double)frequencyHertz;
- (id)initWithFrequency:(double)arg1 sensitivity:(double)arg2 isLeftEar:(bool)arg3;
- (bool)isLeftEar;
- (double)sensitivityDBHL;

@end
