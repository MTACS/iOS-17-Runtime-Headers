
@interface STBackgroundActivitiesStatusDomainBackgroundActivityAttribution : NSObject <BSDebugDescriptionProviding, NSCopying, NSSecureCoding> {
    STActivityAttribution * _activityAttribution;
    NSString * _backgroundActivityIdentifier;
    bool  _showsWhenForeground;
}

@property (nonatomic, readonly, copy) STActivityAttribution *activityAttribution;
@property (nonatomic, readonly, copy) NSString *backgroundActivityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showsWhenForeground;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)activityAttribution;
- (id)backgroundActivityIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBackgroundActivityIdentifier:(id)arg1 activityAttribution:(id)arg2;
- (id)initWithBackgroundActivityIdentifier:(id)arg1 activityAttribution:(id)arg2 showsWhenForeground:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)showsWhenForeground;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
