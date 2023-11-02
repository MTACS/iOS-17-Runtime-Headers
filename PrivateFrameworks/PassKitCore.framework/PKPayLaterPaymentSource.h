
@interface PKPayLaterPaymentSource : NSObject <NSSecureCoding> {
    NSString * _identifier;
    long long  _priority;
}

@property (nonatomic) long long priority;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (unsigned long long)type;

@end
