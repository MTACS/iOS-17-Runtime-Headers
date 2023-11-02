
@interface _UIObjectIdentifierPathProxy : NSObject <NSSecureCoding> {
    NSString * _identifierPath;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end
