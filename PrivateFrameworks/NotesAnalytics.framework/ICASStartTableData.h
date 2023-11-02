
@interface ICASStartTableData : NSObject <AADataEventType> {
    NSNumber * _startingColumnCount;
    NSNumber * _startingRowCount;
}

@property (nonatomic, readonly) NSNumber *startingColumnCount;
@property (nonatomic, readonly) NSNumber *startingRowCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithStartingRowCount:(id)arg1 startingColumnCount:(id)arg2;
- (id)startingColumnCount;
- (id)startingRowCount;
- (id)toDict;

@end
