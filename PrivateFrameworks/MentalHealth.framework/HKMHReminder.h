
@interface HKMHReminder : NSObject <NSCopying, NSSecureCoding> {
    NSDateComponents * _dateComponents;
    bool  _isEnabled;
}

@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (nonatomic, readonly) bool isEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponents:(id)arg1 isEnabled:(bool)arg2;
- (bool)isEnabled;

@end
