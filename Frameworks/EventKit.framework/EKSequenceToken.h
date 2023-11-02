
@interface EKSequenceToken : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _sequenceNumbers;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CADToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCADSequenceToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)legacyToken;

@end
