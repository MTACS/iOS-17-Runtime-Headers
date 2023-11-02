
@interface SGQuickResponsesCategoryScore : NSObject {
    double  _average;
    double  _maximum;
    unsigned long long  _modelCount;
}

@property (nonatomic, readonly) double average;
@property (nonatomic, readonly) double maximum;

- (void)addScore:(double)arg1;
- (double)average;
- (id)init;
- (double)maximum;

@end
