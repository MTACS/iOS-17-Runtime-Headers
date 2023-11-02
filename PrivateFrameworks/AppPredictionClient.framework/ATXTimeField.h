
@interface ATXTimeField : NSObject <NSSecureCoding> {
    NSString * _title;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 value:(id)arg2;
- (id)title;
- (id)value;

@end
