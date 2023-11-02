
@interface STLocationStatusDomainDataChangeContext : NSObject <NSSecureCoding, STStatusDomainDataChangeContext> {
    bool  _userInitiated;
    bool  _wantsProminentIndication;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUserInitiated, nonatomic, readonly) bool userInitiated;
@property (nonatomic, readonly) bool wantsProminentIndication;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUserInitiated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)wantsProminentIndication;

@end
