
@interface CTEmergencyModeResult : NSObject <NSCopying, NSSecureCoding> {
    CTXPCServiceSubscriptionContext * _context;
    CTEmergencyMode * _mode;
}

@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *context;
@property (nonatomic, readonly) CTEmergencyMode *mode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(id)arg1 andContext:(id)arg2;
- (id)mode;

@end
