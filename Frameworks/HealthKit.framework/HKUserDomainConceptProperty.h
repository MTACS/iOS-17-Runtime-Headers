
@interface HKUserDomainConceptProperty : NSObject <NSCopying, NSSecureCoding> {
    bool  _deleted;
    double  _timestamp;
    long long  _type;
    long long  _version;
}

@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long version;

+ (id)mergeListsOfPropertiesWithType:(long long)arg1 intoListOfProperties:(id)arg2 fromListOfProperties:(id)arg3 options:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 version:(long long)arg2 timestamp:(double)arg3 deleted:(bool)arg4;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (double)timestamp;
- (long long)type;
- (void)unitTesting_setTimestamp:(double)arg1;
- (id)valueDescription;
- (long long)version;

@end
