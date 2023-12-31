
@interface _UICollectionViewTrackedValue : NSObject {
    long long  _currentIndex;
    bool  _isAccumulating;
    double  _trackedValue;
    NSArray * _values;
    long long  _valuesCount;
}

@property (nonatomic) bool isAccumulating;
@property (nonatomic) double trackedValue;

- (void).cxx_destruct;
- (void)addValue:(double)arg1;
- (id)init;
- (bool)isAccumulating;
- (void)setIsAccumulating:(bool)arg1;
- (void)setTrackedValue:(double)arg1;
- (double)speed;
- (double)trackedValue;

@end
