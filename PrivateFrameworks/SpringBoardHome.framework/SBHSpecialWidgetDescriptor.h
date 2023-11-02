
@interface SBHSpecialWidgetDescriptor : CHSWidgetDescriptor {
    NSString * _description;
    NSString * _displayName;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1 supportedSizeClasses:(unsigned long long)arg2;
- (id)accentColor;
- (id)backgroundColor;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 supportedSizeClasses:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)sbh_canBeAddedToStack;
- (bool)sbh_supportsRemovableBackground;
- (bool)sbh_supportsRemovableBackgroundOrAccessoryFamilies;
- (void)setType:(unsigned long long)arg1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)type;
- (id)widgetDescription;

@end
