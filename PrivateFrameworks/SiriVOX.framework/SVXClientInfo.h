
@interface SVXClientInfo : NSObject <NSCopying, NSSecureCoding> {
    int  _processIdentifier;
    NSString * _processName;
}

@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly, copy) NSString *processName;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1 processName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (int)processIdentifier;
- (id)processName;

@end
