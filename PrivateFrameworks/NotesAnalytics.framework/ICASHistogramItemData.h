
@interface ICASHistogramItemData : NSObject <AADataEventType> {
    NSNumber * _count;
    NSNumber * _leftBound;
    NSNumber * _rightBound;
}

@property (nonatomic, readonly) NSNumber *count;
@property (nonatomic, readonly) NSNumber *leftBound;
@property (nonatomic, readonly) NSNumber *rightBound;

+ (id)dataName;

- (void).cxx_destruct;
- (id)count;
- (id)initWithLeftBound:(id)arg1 rightBound:(id)arg2 count:(id)arg3;
- (id)leftBound;
- (id)rightBound;
- (id)toDict;

@end
