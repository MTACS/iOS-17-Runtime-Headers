
@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _hideOtherWindowsDuringAppearance;
    long long  _requestSource;
    long long  _rotationStyle;
    bool  _wakeScreen;
}

@property (nonatomic, readonly) bool hideOtherWindowsDuringAppearance;
@property (nonatomic, readonly) long long requestSource;
@property (nonatomic, readonly) long long rotationStyle;
@property (nonatomic, readonly) bool wakeScreen;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)hideOtherWindowsDuringAppearance;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWakeScreen:(bool)arg1 hideOtherWindowsDuringAppearance:(bool)arg2 rotationStyle:(long long)arg3 requestSource:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)requestSource;
- (long long)rotationStyle;
- (bool)wakeScreen;

@end
