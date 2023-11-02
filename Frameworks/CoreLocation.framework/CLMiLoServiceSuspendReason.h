
@interface CLMiLoServiceSuspendReason : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _suspendReasonEnum;
}

@property (nonatomic, readonly) unsigned long long suspendReasonEnum;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuspendReasonEnum:(unsigned long long)arg1;
- (unsigned long long)suspendReasonEnum;

@end
