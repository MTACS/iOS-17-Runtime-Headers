
@interface HKMCNotification : NSObject <NSCopying, NSSecureCoding> {
    NSString * _category;
    NSDateComponents * _dueDateComponents;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSDateComponents *dueDateComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dueDateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1 dueDateComponents:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDueDateComponents:(id)arg1;

@end
