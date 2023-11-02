
@interface SPLastOnlineLocationInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _timestamp;
    NSDate * _updatedOn;
}

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSDate *updatedOn;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 updatedOn:(id)arg2;
- (void)setTimestamp:(id)arg1;
- (void)setUpdatedOn:(id)arg1;
- (id)timestamp;
- (id)updatedOn;

@end
