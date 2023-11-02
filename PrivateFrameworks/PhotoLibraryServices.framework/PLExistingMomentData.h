
@interface PLExistingMomentData : NSObject {
    NSDateInterval * _dateInterval;
    NSDate * _endDate;
    unsigned long long  _numberOfAssets;
    NSObject<NSCopying> * _objectID;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) NSObject<NSCopying> *objectID;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithMoment:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfAssets;
- (id)objectID;
- (void)registerAsset:(id)arg1;
- (id)startDate;

@end
