
@interface _SWCGeneration : NSObject <NSCopying, NSSecureCoding, SWCRedactedDescription> {
    int  _processIdentifier;
    int  _processIdentifierVersion;
    unsigned long long  _tick;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)generationByIncrementingSelf;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1 version:(int)arg2 tick:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;

@end
