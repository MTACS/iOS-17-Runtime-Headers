
@interface STAuthenticationResult : NSObject <NSSecureCoding> {
    bool  _authenticated;
}

@property (readonly) bool authenticated;

+ (bool)supportsSecureCoding;

- (bool)authenticated;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAuthenticationResult:(id)arg1;

@end
