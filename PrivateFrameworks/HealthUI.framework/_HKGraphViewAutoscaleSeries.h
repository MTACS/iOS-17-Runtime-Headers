
@interface _HKGraphViewAutoscaleSeries : NSObject {
    long long  _autoscaleGroupRow;
    NSMutableArray * _autoscaleSeries;
    HKAxis * _autoscaleYAxis;
}

@property (nonatomic, readonly) long long autoscaleGroupRow;
@property (nonatomic, readonly) NSMutableArray *autoscaleSeries;
@property (nonatomic, readonly) HKAxis *autoscaleYAxis;

- (void).cxx_destruct;
- (void)addAutoscaleSeries:(id)arg1;
- (long long)autoscaleGroupRow;
- (id)autoscaleSeries;
- (id)autoscaleYAxis;
- (id)initWithAutoscaleGroupRow:(long long)arg1 autoscaleYAxis:(id)arg2;

@end
