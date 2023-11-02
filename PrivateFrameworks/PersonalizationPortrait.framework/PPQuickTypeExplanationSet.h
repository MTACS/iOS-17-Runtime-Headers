
@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {
    _PASLock * _set;
}

+ (id)stringFromExplanation:(unsigned char)arg1;
+ (bool)supportsSecureCoding;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQuickTypeExplanationSet:(id)arg1;
- (void)push:(unsigned char)arg1;

@end
