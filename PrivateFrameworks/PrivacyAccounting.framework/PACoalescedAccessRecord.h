
@interface PACoalescedAccessRecord : PACompleteAccessRecord {
    unsigned long long  _count;
}

@property (nonatomic, readonly) unsigned long long count;

+ (bool)supportsSecureCoding;

- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccess:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 count:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToAccessRecord:(id)arg1;

@end
