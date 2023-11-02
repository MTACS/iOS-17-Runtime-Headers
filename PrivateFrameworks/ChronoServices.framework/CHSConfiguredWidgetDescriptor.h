
@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, CHSWidgetConfigurationReference, CHSWidgetIdentifiable, CHSWidgetPersonality, NSCopying, NSMutableCopying, NSSecureCoding> {
    CHSWidgetDisplayProperties * _displayProperties;
    CHSWidgetMetrics * _metrics;
    <CHSWidgetRefreshStrategy> * _refreshStrategy;
    bool  _showsWidgetLabel;
    bool  _suggestion;
    unsigned long long  _supportedColorSchemes;
    NSArray * _supportedRenderSchemes;
    bool  _supportsLowLuminance;
    bool  _systemConfigured;
    NSString * _uniqueIdentifier;
    CHSConfiguredWidgetContainerDescriptor * _weak_container;
    CHSWidget * _widget;
}

@property (nonatomic, readonly) CHSConfiguredWidgetContainerDescriptor *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CHSWidgetDisplayProperties *displayProperties;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) CHSExtensionIdentity *extensionIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) CHSWidgetMetrics *metrics;
@property (nonatomic, readonly) <CHSWidgetRefreshStrategy> *refreshStrategy;
@property (nonatomic, readonly) bool showsComplicationLabel;
@property (nonatomic, readonly) bool showsWidgetLabel;
@property (getter=isSuggestion, nonatomic, readonly) bool suggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedColorSchemes;
@property (nonatomic, readonly, copy) NSArray *supportedRenderSchemes;
@property (nonatomic, readonly) unsigned long long supportedRenderingModes;
@property (nonatomic, readonly) bool supportsLowLuminance;
@property (nonatomic, readonly) bool supportsTinting;
@property (getter=isSystemConfigured, nonatomic, readonly) bool systemConfigured;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) CHSWidget *widget;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDescriptor:(id)arg1;
- (void)_setContainer:(id)arg1;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)extensionIdentity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 widget:(id)arg2 metrics:(id)arg3;
- (id)initWithUniqueIdentifier:(id)arg1 widget:(id)arg2 metrics:(id)arg3 isSuggestion:(bool)arg4 isSystemConfigured:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isSuggestion;
- (bool)isSystemConfigured;
- (id)kind;
- (bool)matches:(id)arg1;
- (bool)matchesPersonality:(id)arg1;
- (id)metrics;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)refreshStrategy;
- (bool)showsComplicationLabel;
- (bool)showsWidgetLabel;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedColorSchemes;
- (id)supportedRenderSchemes;
- (unsigned long long)supportedRenderingModes;
- (bool)supportsLowLuminance;
- (bool)supportsTinting;
- (id)uniqueIdentifier;
- (id)widget;

@end
