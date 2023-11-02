
@interface SVXButtonEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _timestamp;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long type;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned long long)timestamp;
- (long long)type;

@end
