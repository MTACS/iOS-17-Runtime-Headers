
@interface LKNSDictionaryCodingProxy : CACodingProxy {
    NSDictionary * _dict;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)decodedObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end
