
@interface PPNotification : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    NSDate * _date;
    NSString * _message;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4 date:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentDateAndBundleId:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNotification:(id)arg1;
- (id)message;
- (id)subtitle;
- (id)title;

@end
