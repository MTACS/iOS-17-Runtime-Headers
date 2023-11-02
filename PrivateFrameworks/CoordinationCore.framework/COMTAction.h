
@interface COMTAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionIdentifier;
}

@property (nonatomic, readonly) NSString *actionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
