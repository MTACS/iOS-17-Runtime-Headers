
@interface HDSyncPredicate : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSNumber * _defaultMaximumObjectAge;
    NSNumber * _defaultMaximumTombstoneAge;
    NSSet * _excludedSyncProvenances;
    NSSet * _includedObjectTypes;
    NSDictionary * _maximumObjectAgeByType;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) NSNumber *defaultMaximumObjectAge;
@property (nonatomic, readonly, copy) NSNumber *defaultMaximumTombstoneAge;
@property (nonatomic, readonly, copy) NSSet *excludedSyncProvenances;
@property (nonatomic, readonly, copy) NSSet *includedObjectTypes;
@property (nonatomic, readonly, copy) NSDictionary *maximumObjectAgeByType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)defaultMaximumObjectAge;
- (id)defaultMaximumTombstoneAge;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedSyncProvenances;
- (unsigned long long)hash;
- (id)includedObjectTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithExcludedSyncProvenances:(id)arg1 dateInterval:(id)arg2 includedObjectTypes:(id)arg3 defaultMaximumObjectAge:(id)arg4 defaultMaximumTombstoneAge:(id)arg5 maximumObjectAgeByType:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)maximumObjectAgeByType;
- (id)maximumObjectAgeForType:(id)arg1;

@end
