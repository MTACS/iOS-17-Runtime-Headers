
@interface DDRResetRequest : NSObject <NSSecureCoding> {
    long long  _mode;
    DDRResetOptions * _options;
    NSString * _reason;
}

@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) DDRResetOptions *options;
@property (nonatomic, readonly, copy) NSString *reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1 options:(id)arg2 reason:(id)arg3;
- (long long)mode;
- (id)options;
- (id)reason;

@end
