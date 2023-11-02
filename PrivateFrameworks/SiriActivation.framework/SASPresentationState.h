
@interface SASPresentationState : NSObject <NSCopying, NSSecureCoding> {
    NSString * _presentationIdentifier;
}

@property (nonatomic, readonly, copy) NSString *presentationIdentifier;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresentationIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)presentationIdentifier;

@end
