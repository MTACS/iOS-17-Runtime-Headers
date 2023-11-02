
@interface HKJulianIndexedSevenDayQuantitySeriesAxisLabel : NSObject {
    double  _location;
    NSString * _text;
    long long  _type;
}

@property (nonatomic, readonly) double location;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)initWithText:(id)arg1 location:(double)arg2;
- (id)initWithText:(id)arg1 location:(double)arg2 type:(long long)arg3;
- (double)location;
- (id)text;
- (long long)type;

@end
