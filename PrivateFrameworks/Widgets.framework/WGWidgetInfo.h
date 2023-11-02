
@interface WGWidgetInfo : NSObject {
    NSString * _displayName;
    NSExtension * _extension;
    UIImage * _icon;
    long long  _initialDisplayMode;
    long long  _largestAllowedDisplayMode;
    UIImage * _outlineIcon;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    NSPointerArray * _registeredWidgetHosts;
    NSString * _sdkVersion;
    bool  _wantsVisibleFrame;
    struct { 
        unsigned int didInitializeWantsVisibleFrame : 1; 
    }  _widgetInfoFlags;
}

@property (setter=_setDisplayName:, nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) NSExtension *extension;
@property (getter=_icon, setter=_setIcon:, nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) long long initialDisplayMode;
@property (nonatomic, readonly) double initialHeight;
@property (setter=_setLargestAllowedDisplayMode:, nonatomic) long long largestAllowedDisplayMode;
@property (getter=_outlineIcon, setter=_setOutlineIcon:, nonatomic, retain) UIImage *outlineIcon;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (getter=_sdkVersion, nonatomic, readonly, copy) NSString *sdkVersion;
@property (setter=_setWantsVisibleFrame:, nonatomic) bool wantsVisibleFrame;
@property (nonatomic, readonly, copy) NSString *widgetIdentifier;

+ (id)_productVersion;
+ (void)_updateRowHeightForContentSizeCategory;
+ (double)maximumContentHeightForCompactDisplayMode;
+ (id)widgetInfoWithExtension:(id)arg1;

- (void).cxx_destruct;
- (id)_icon;
- (id)_outlineIcon;
- (id)_queue_iconFromWidgetBundleForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (id)_queue_iconWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4;
- (void)_requestIcon:(bool)arg1 withHandler:(id /* block */)arg2;
- (void)_resetIcons;
- (void)_resetIconsImpl;
- (id)_sdkVersion;
- (void)_setDisplayName:(id)arg1;
- (void)_setIcon:(id)arg1;
- (void)_setLargestAllowedDisplayMode:(long long)arg1;
- (void)_setOutlineIcon:(id)arg1;
- (void)_setWantsVisibleFrame:(bool)arg1;
- (id)displayName;
- (id)extension;
- (id)initWithExtension:(id)arg1;
- (long long)initialDisplayMode;
- (double)initialHeight;
- (bool)isLinkedOnOrAfterSystemVersion:(id)arg1;
- (long long)largestAllowedDisplayMode;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)registerWidgetHost:(id)arg1;
- (void)requestIconWithHandler:(id /* block */)arg1;
- (void)requestSettingsIconWithHandler:(id /* block */)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1 forWidgetHost:(id)arg2;
- (bool)wantsVisibleFrame;
- (id)widgetIdentifier;
- (id)widgetInfoWithExtension:(id)arg1;

@end
