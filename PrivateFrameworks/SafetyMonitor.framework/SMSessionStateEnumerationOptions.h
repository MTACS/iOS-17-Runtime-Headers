
@interface SMSessionStateEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    bool  _ascending;
    unsigned long long  _batchSize;
    NSNumber * _boundingBoxRadius;
    NSDateInterval * _dateInterval;
    unsigned long long  _fetchLimit;
    CLLocation * _locationBoundingBox;
    NSUUID * _sessionIdentifier;
    unsigned long long  _sessionState;
    bool  _sortByCreationDate;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) NSNumber *boundingBoxRadius;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) unsigned long long fetchLimit;
@property (nonatomic, readonly) CLLocation *locationBoundingBox;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) unsigned long long sessionState;
@property (nonatomic, readonly) bool sortByCreationDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (unsigned long long)batchSize;
- (id)boundingBoxRadius;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)fetchLimit;
- (id)init;
- (id)initWithBatchSize:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 sortByCreationDate:(bool)arg3 ascending:(bool)arg4 dateInterval:(id)arg5;
- (id)initWithBatchSize:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 sortByCreationDate:(bool)arg3 ascending:(bool)arg4 dateInterval:(id)arg5 sessionState:(unsigned long long)arg6 locationBoundingBox:(id)arg7 boundingBoxRadius:(id)arg8 sessionIdentifier:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)locationBoundingBox;
- (id)sessionIdentifier;
- (unsigned long long)sessionState;
- (bool)sortByCreationDate;

@end
