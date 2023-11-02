
@interface SPBeaconingKey : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSData * _key;
    unsigned long long  _primaryIndex;
    unsigned long long  _secondaryIndex;
    NSData * _secondaryKey;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, copy) NSData *key;
@property (nonatomic) unsigned long long primaryIndex;
@property (nonatomic) unsigned long long secondaryIndex;
@property (nonatomic, copy) NSData *secondaryKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 key:(id)arg2;
- (id)initWithDateInterval:(id)arg1 key:(id)arg2 secondaryKey:(id)arg3 primaryIndex:(unsigned long long)arg4 secondaryIndex:(unsigned long long)arg5;
- (id)key;
- (unsigned long long)primaryIndex;
- (unsigned long long)secondaryIndex;
- (id)secondaryKey;
- (void)setDateInterval:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPrimaryIndex:(unsigned long long)arg1;
- (void)setSecondaryIndex:(unsigned long long)arg1;
- (void)setSecondaryKey:(id)arg1;

@end
