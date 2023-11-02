
@interface ATXTimeContext : NSObject <NSSecureCoding> {
    long long  _contextType;
}

@property (nonatomic, readonly) long long contextType;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (long long)contextType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXTimeContext:(id)arg1;
- (id)title;

@end
