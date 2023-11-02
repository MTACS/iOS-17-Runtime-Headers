
@interface SVXUserFeedbackNode : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _dependentNodes;
    double  _duration;
    SVXUserFeedback * _feedback;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSSet *dependentNodes;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) SVXUserFeedback *feedback;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dependentNodes;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)feedback;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 duration:(double)arg2 feedback:(id)arg3 dependentNodes:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
