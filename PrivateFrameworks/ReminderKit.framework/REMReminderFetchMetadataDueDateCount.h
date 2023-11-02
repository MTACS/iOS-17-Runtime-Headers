
@interface REMReminderFetchMetadataDueDateCount : NSObject <NSCopying, NSSecureCoding> {
    long long  _count;
    NSDate * _dueDate;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSDate *dueDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDueDate:(id)arg1 count:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
