
@interface EMReadLater : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) bool isActive;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;

@end
