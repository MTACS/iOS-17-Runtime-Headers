
@interface STStatusItemsStatusDomainStatusItemAttribution : NSObject <BSDebugDescriptionProviding, NSCopying, NSSecureCoding> {
    STActivityAttribution * _activityAttribution;
    NSString * _statusItemIdentifier;
}

@property (nonatomic, readonly, copy) STActivityAttribution *activityAttribution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *statusItemIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)activityAttribution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusItemIdentifier:(id)arg1 activityAttribution:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)statusItemIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
