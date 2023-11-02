
@interface CalSingleDatabaseInMemoryChangeTimestamp : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _myself;
    unsigned long long  _others;
}

@property (nonatomic, readonly) unsigned long long myself;
@property (nonatomic, readonly) unsigned long long others;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDawnOfTime;
- (id)initWithTimestampForMyself:(unsigned long long)arg1 others:(unsigned long long)arg2;
- (unsigned long long)myself;
- (unsigned long long)others;

@end
