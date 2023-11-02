
@interface SASPresentationAggregateState : NSObject <NSCopying, NSSecureCoding> {
    bool  _canAcceptNewActivations;
    bool  _didNewActivationAcceptanceChange;
    long long  _requestState;
}

@property (nonatomic, readonly) bool canAcceptNewActivations;
@property (nonatomic, readonly) bool didNewActivationAcceptanceChange;
@property (nonatomic, readonly) long long requestState;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (bool)canAcceptNewActivations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didNewActivationAcceptanceChange;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCanAcceptNewActivations:(bool)arg1 didNewActivationAcceptanceChange:(bool)arg2 requestState:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)requestState;

@end
