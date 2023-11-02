
@interface _DKLocalChanges : NSObject {
    NSDate * _endDate;
    NSArray * _insertedObjects;
    NSDate * _startDate;
    NSArray * _tombstones;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *insertedObjects;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSArray *tombstones;

- (void).cxx_destruct;
- (id)endDate;
- (id)insertedObjects;
- (id)startDate;
- (id)tombstones;

@end
