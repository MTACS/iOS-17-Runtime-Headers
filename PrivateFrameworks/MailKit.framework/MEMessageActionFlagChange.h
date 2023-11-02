
@interface MEMessageActionFlagChange : NSObject <NSSecureCoding> {
    long long  _flag;
}

@property (nonatomic, readonly) long long flag;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flag;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlag:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end
