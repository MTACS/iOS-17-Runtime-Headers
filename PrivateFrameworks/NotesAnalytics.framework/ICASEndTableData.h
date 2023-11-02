
@interface ICASEndTableData : NSObject <AADataEventType> {
    NSNumber * _endingColumnCount;
    NSNumber * _endingRowCount;
}

@property (nonatomic, readonly) NSNumber *endingColumnCount;
@property (nonatomic, readonly) NSNumber *endingRowCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endingColumnCount;
- (id)endingRowCount;
- (id)initWithEndingRowCount:(id)arg1 endingColumnCount:(id)arg2;
- (id)toDict;

@end
