
@interface COAlarmDeleteEvent : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSUUID * _identifier;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 date:(id)arg2;

@end
