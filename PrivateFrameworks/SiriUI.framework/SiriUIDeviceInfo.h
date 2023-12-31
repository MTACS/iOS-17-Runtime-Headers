
@interface SiriUIDeviceInfo : NSObject {
    bool  _deviceShouldDeferFlamesView;
    bool  _deviceShouldFreezeAura;
    bool  _deviceShouldSkipGuidePreloading;
    bool  _deviceShouldUseFrozenBackdropSnapshot;
    bool  _deviceSupportsProximitySensor;
    bool  _deviceZoomed;
    bool  _largeFormatPhone;
}

@property (nonatomic, readonly) bool deviceShouldDeferFlamesView;
@property (nonatomic, readonly) bool deviceShouldFreezeAura;
@property (nonatomic, readonly) bool deviceShouldSkipGuidePreloading;
@property (nonatomic, readonly) bool deviceShouldUseFrozenBackdropSnapshot;
@property (nonatomic, readonly) bool deviceSupportsProximitySensor;
@property (getter=isDeviceZoomed, nonatomic, readonly) bool deviceZoomed;
@property (getter=isLargeFormatPhone, nonatomic, readonly) bool largeFormatPhone;

+ (id)sharedInstance;

- (void)_updateProductTypeDerivedProperties;
- (bool)deviceShouldDeferFlamesView;
- (bool)deviceShouldFreezeAura;
- (bool)deviceShouldSkipGuidePreloading;
- (bool)deviceShouldUseFrozenBackdropSnapshot;
- (bool)deviceSupportsProximitySensor;
- (id)initWithLargeFormatPhone:(bool)arg1 gestaltModes:(id)arg2 screenSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isDeviceZoomed;
- (bool)isLargeFormatPhone;

@end
