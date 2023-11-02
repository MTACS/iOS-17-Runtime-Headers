
@interface SVXDeviceProblemsState : NSObject <NSCopying, NSSecureCoding> {
    bool  _isFixingProblems;
    unsigned long long  _problems;
}

@property (nonatomic, readonly) bool isFixingProblems;
@property (nonatomic, readonly) unsigned long long problems;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsFixingProblems:(bool)arg1 problems:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFixingProblems;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned long long)problems;

@end
