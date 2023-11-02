
@interface ICASAcceleratorUsageData : NSObject <AADataEventType> {
    NSNumber * _endResultCount;
    NSNumber * _maxNumCharTyped;
}

@property (nonatomic, readonly) NSNumber *endResultCount;
@property (nonatomic, readonly) NSNumber *maxNumCharTyped;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endResultCount;
- (id)initWithMaxNumCharTyped:(id)arg1 endResultCount:(id)arg2;
- (id)maxNumCharTyped;
- (id)toDict;

@end
