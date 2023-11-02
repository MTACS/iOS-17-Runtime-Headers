
@interface ICASTableSnapshotItemData : NSObject <AADataEventType> {
    NSNumber * _tableColumnCount;
    NSNumber * _tableRowCount;
}

@property (nonatomic, readonly) NSNumber *tableColumnCount;
@property (nonatomic, readonly) NSNumber *tableRowCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTableRowCount:(id)arg1 tableColumnCount:(id)arg2;
- (id)tableColumnCount;
- (id)tableRowCount;
- (id)toDict;

@end
