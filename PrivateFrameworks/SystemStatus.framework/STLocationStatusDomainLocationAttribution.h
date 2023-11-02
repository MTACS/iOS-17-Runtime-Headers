
@interface STLocationStatusDomainLocationAttribution : NSObject <BSDebugDescriptionProviding, BSDescriptionProviding, NSCopying, NSSecureCoding> {
    STActivityAttribution * _activityAttribution;
    unsigned long long  _eligibleDisplayModes;
    unsigned long long  _locationState;
}

@property (nonatomic, readonly, copy) STActivityAttribution *activityAttribution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eligibleDisplayModes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long locationState;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityAttribution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)eligibleDisplayModes;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationState:(unsigned long long)arg1 activityAttribution:(id)arg2;
- (id)initWithLocationState:(unsigned long long)arg1 activityAttribution:(id)arg2 eligibleDisplayModes:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)locationState;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
