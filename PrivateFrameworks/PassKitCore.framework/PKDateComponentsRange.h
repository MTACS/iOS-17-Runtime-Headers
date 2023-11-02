
@interface PKDateComponentsRange : NSObject <NSCopying, NSSecureCoding> {
    NSDateComponents * _endDateComponents;
    NSDateComponents * _startDateComponents;
}

@property (nonatomic, readonly, copy) NSDateComponents *endDateComponents;
@property (nonatomic, readonly, copy) NSDateComponents *startDateComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDateComponents;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDateComponentsRange:(id)arg1;
- (id)startDateComponents;

@end
