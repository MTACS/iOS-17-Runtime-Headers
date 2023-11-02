
@interface _DKSyncChanges : NSObject {
    NSArray * _additionChangeSets;
    NSArray * _deletionChangeSets;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSArray *additionChangeSets;
@property (nonatomic, readonly) NSArray *deletionChangeSets;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)additionChangeSets;
- (id)deletionChangeSets;
- (id)endDate;
- (id)startDate;

@end
