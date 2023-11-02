
@interface WFWidgetConfigurationRequest : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultCardSize;
    long long  _family;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialCardFrame;
    INIntent * _intent;
    NSSecurityScopedURLWrapper * _intentLocalizationTableBundleURL;
    WFImage * _remoteAppIcon;
    NSString * _remoteAppLocalizedName;
    NSString * _remoteDeviceIdentifier;
    NSString * _remoteLanguageCode;
    INIntent * _remoteLocalizedIntent;
    bool  _usesWidgetAccentColor;
    NSSecurityScopedURLWrapper * _widgetBundleScopedURL;
    unsigned long long  _widgetConfigurationStyle;
    NSString * _widgetDescription;
    NSString * _widgetDisplayName;
    UIColor * _widgetPrimaryColor;
    UIColor * _widgetTintColor;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultCardSize;
@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialCardFrame;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly, copy) NSSecurityScopedURLWrapper *intentLocalizationTableBundleURL;
@property (nonatomic, readonly, copy) WFImage *remoteAppIcon;
@property (nonatomic, readonly, copy) NSString *remoteAppLocalizedName;
@property (nonatomic, readonly, copy) NSString *remoteDeviceIdentifier;
@property (nonatomic, copy) NSString *remoteLanguageCode;
@property (nonatomic, retain) INIntent *remoteLocalizedIntent;
@property (nonatomic, readonly) unsigned long long resolvedWidgetConfigurationStyle;
@property (nonatomic, readonly) bool usesWidgetAccentColor;
@property (nonatomic, readonly) NSSecurityScopedURLWrapper *widgetBundleScopedURL;
@property (nonatomic, readonly) unsigned long long widgetConfigurationStyle;
@property (nonatomic, readonly, copy) NSString *widgetDescription;
@property (nonatomic, readonly, copy) NSString *widgetDisplayName;
@property (getter=isWidgetExtensionInformationLoaded, nonatomic, readonly) bool widgetExtensionInformationLoaded;
@property (nonatomic, readonly) UIColor *widgetPrimaryColor;
@property (nonatomic, readonly) UIColor *widgetTintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)bundleIdentifier;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultCardSize;
- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 bundleIdentifier:(id)arg2 intentLocalizationTableBundleURL:(id)arg3 widgetBundleScopedURL:(id)arg4 family:(long long)arg5 widgetConfigurationStyle:(unsigned long long)arg6 defaultCardSize:(struct CGSize { double x1; double x2; })arg7 initialCardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 widgetDisplayName:(id)arg9 widgetDescription:(id)arg10 usesWidgetAccentColor:(bool)arg11 remoteDeviceIdentifier:(id)arg12 remoteAppLocalizedName:(id)arg13 remoteAppIcon:(id)arg14;
- (id)initWithIntent:(id)arg1 bundleIdentifier:(id)arg2 intentLocalizationTableBundleURL:(id)arg3 widgetBundleScopedURL:(id)arg4 family:(long long)arg5 widgetConfigurationStyle:(unsigned long long)arg6 defaultCardSize:(struct CGSize { double x1; double x2; })arg7 initialCardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 widgetDisplayName:(id)arg9 widgetDescription:(id)arg10 widgetPrimaryColor:(id)arg11 widgetTintColor:(id)arg12 usesWidgetAccentColor:(bool)arg13 remoteDeviceIdentifier:(id)arg14 remoteAppLocalizedName:(id)arg15 remoteAppIcon:(id)arg16;
- (id)initWithOptions:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialCardFrame;
- (id)intent;
- (id)intentLocalizationTableBundleURL;
- (bool)isWidgetExtensionInformationLoaded;
- (void)loadWidgetExtensionInformationWithCompletion:(id /* block */)arg1;
- (id)remoteAppIcon;
- (id)remoteAppLocalizedName;
- (id)remoteDeviceIdentifier;
- (id)remoteLanguageCode;
- (id)remoteLocalizedIntent;
- (unsigned long long)resolvedWidgetConfigurationStyle;
- (void)setRemoteLanguageCode:(id)arg1;
- (void)setRemoteLocalizedIntent:(id)arg1;
- (void)startAccessingSecurityScopedBundleResource;
- (bool)usesWidgetAccentColor;
- (id)widgetBundleScopedURL;
- (unsigned long long)widgetConfigurationStyle;
- (id)widgetDescription;
- (id)widgetDisplayName;
- (id)widgetPrimaryColor;
- (id)widgetTintColor;

@end
