
@interface HKAccessibilityPointData : NSObject {
    NSDate * _horizontalDate;
    double  _horizontalScreenCoordinate;
    NSString * _horizontalTimeCoordinate;
    NSArray * _values;
}

@property (nonatomic, readonly) NSDate *horizontalDate;
@property (nonatomic, readonly) double horizontalScreenCoordinate;
@property (nonatomic, readonly) NSString *horizontalTimeCoordinate;
@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (id)description;
- (id)horizontalDate;
- (double)horizontalScreenCoordinate;
- (id)horizontalTimeCoordinate;
- (id)initWithHorizontalScreenCoordinate:(double)arg1 horizontalTimeCoordinate:(id)arg2 horizontalDate:(id)arg3 values:(id)arg4;
- (id)values;

@end
