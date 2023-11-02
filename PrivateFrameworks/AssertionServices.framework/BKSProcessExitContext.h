
@interface BKSProcessExitContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _exitReason;
}

@property (nonatomic, readonly) unsigned long long exitReason;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)exitReason;
- (id)initWithCoder:(id)arg1;

@end
