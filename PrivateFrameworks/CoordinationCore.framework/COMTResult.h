
@interface COMTResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionIdentifier;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
