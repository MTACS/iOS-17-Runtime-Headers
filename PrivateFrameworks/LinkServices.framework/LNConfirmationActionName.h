
@interface LNConfirmationActionName : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _acceptAlternatives;
    LNStaticDeferredLocalizedString * _acceptLabel;
    NSArray * _denyAlternatives;
    LNStaticDeferredLocalizedString * _denyLabel;
    bool  _destructive;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSArray *acceptAlternatives;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *acceptLabel;
@property (nonatomic, readonly, copy) NSArray *denyAlternatives;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *denyLabel;
@property (nonatomic, readonly) bool destructive;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptAlternatives;
- (id)acceptLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denyAlternatives;
- (id)denyLabel;
- (id)description;
- (bool)destructive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 destructive:(bool)arg2;
- (id)initWithType:(long long)arg1 destructive:(bool)arg2 acceptLabel:(id)arg3 acceptAlternatives:(id)arg4 denyLabel:(id)arg5 denyAlternatives:(id)arg6;
- (long long)type;

@end
