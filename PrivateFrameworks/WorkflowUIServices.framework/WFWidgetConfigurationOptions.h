
@interface WFWidgetConfigurationOptions : NSObject {
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
    }  _initialConfigurationCardViewFrame;
    INIntent * _intent;
    WFImage * _remoteAppIcon;
    NSString * _remoteAppLocalizedName;
    NSString * _remoteDeviceIdentifier;
    unsigned long long  _widgetConfigurationStyle;
    NSString * _widgetDescription;
    NSString * _widgetDisplayName;
    NSString * _widgetExtensionBundleIdentifier;
}

@property (nonatomic) long long family;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialConfigurationCardViewFrame;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic, copy) WFImage *remoteAppIcon;
@property (nonatomic, copy) NSString *remoteAppLocalizedName;
@property (nonatomic, copy) NSString *remoteDeviceIdentifier;
@property (nonatomic, readonly) unsigned long long widgetConfigurationStyle;
@property (nonatomic, copy) NSString *widgetDescription;
@property (nonatomic, copy) NSString *widgetDisplayName;
@property (nonatomic, retain) NSString *widgetExtensionBundleIdentifier;

- (void).cxx_destruct;
- (long long)family;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialConfigurationCardViewFrame;
- (id)intent;
- (id)remoteAppIcon;
- (id)remoteAppLocalizedName;
- (id)remoteDeviceIdentifier;
- (void)setFamily:(long long)arg1;
- (void)setInitialConfigurationCardViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIntent:(id)arg1;
- (void)setRemoteAppIcon:(id)arg1;
- (void)setRemoteAppLocalizedName:(id)arg1;
- (void)setRemoteDeviceIdentifier:(id)arg1;
- (void)setWidgetDescription:(id)arg1;
- (void)setWidgetDisplayName:(id)arg1;
- (void)setWidgetExtensionBundleIdentifier:(id)arg1;
- (unsigned long long)widgetConfigurationStyle;
- (id)widgetDescription;
- (id)widgetDisplayName;
- (id)widgetExtensionBundleIdentifier;

@end
