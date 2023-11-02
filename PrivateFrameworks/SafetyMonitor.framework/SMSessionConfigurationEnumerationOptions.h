
@interface SMSessionConfigurationEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    bool  _ascending;
    unsigned long long  _batchSize;
    NSNumber * _boundingBoxRadius;
    NSDateInterval * _dateInterval;
    CLLocation * _destinationBoundingBoxLocation;
    NSDateComponents * _endDateComponents;
    unsigned long long  _fetchLimit;
    bool  _pickOneConfigInTimeInADayInterval;
    NSUUID * _sessionIdentifier;
    NSArray * _sessionTypes;
    bool  _sortBySessionStartDate;
    CLLocation * _startBoundingBoxLocation;
    NSDateComponents * _startDateComponents;
    NSDateInterval * _timeInADayInterval;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, copy) NSNumber *boundingBoxRadius;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, copy) CLLocation *destinationBoundingBoxLocation;
@property (nonatomic, readonly) NSDateComponents *endDateComponents;
@property (nonatomic, readonly) unsigned long long fetchLimit;
@property (nonatomic, readonly) bool pickOneConfigInTimeInADayInterval;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) NSArray *sessionTypes;
@property (nonatomic, readonly) bool sortBySessionStartDate;
@property (nonatomic, copy) CLLocation *startBoundingBoxLocation;
@property (nonatomic, readonly) NSDateComponents *startDateComponents;
@property (nonatomic, readonly) NSDateInterval *timeInADayInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (unsigned long long)batchSize;
- (id)boundingBoxRadius;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)destinationBoundingBoxLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)endDateComponents;
- (Class)enumeratedType;
- (unsigned long long)fetchLimit;
- (id)init;
- (id)initWithBatchSize:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 sortBySessionStartDate:(bool)arg3 ascending:(bool)arg4 sessionTypes:(id)arg5 timeInADayInterval:(id)arg6 pickOneConfigInTimeInADayInterval:(bool)arg7 dateInterval:(id)arg8 startBoundingBoxLocation:(id)arg9 destinationBoundingBoxLocation:(id)arg10 boundingBoxRadius:(id)arg11 sessionIdentifier:(id)arg12;
- (id)initWithCoder:(id)arg1;
- (bool)pickOneConfigInTimeInADayInterval;
- (id)sessionIdentifier;
- (id)sessionTypes;
- (void)setBoundingBoxRadius:(id)arg1;
- (void)setDestinationBoundingBoxLocation:(id)arg1;
- (void)setStartBoundingBoxLocation:(id)arg1;
- (bool)sortBySessionStartDate;
- (id)startBoundingBoxLocation;
- (id)startDateComponents;
- (id)timeInADayInterval;

@end
