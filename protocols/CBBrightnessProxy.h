
@protocol CBBrightnessProxy <NSObject>

@required

- (unsigned long long)CBDispTypeDFR;
- (unsigned long long)CBDispTypeExternal;
- (unsigned long long)CBDispTypeIntegrated;
- (unsigned long long)CBDispTypeVirtual;
- (unsigned long long)CBDispTypeWireless;
- (bool)brightnessAvailable;
- (NSDictionary *)brightnessCapabilities;
- (id)brightnessNotificationAttached;
- (id)brightnessNotificationDetached;
- (id)brightnessNotificationFlipBookOff;
- (id)brightnessNotificationFlipBookOn;
- (id)brightnessNotificationPowerOff;
- (id)brightnessNotificationPowerOn;
- (id)brightnessNotificationRequestEDR;
- (NSString *)brightnessRequestEDRHeadroom;
- (NSString *)brightnessRequestRampDuration;
- (bool)commitBrightness:(id*)arg1;
- (bool)commitBrightness:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 7: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (NSUUID *)containerId;
- (int)displayId;
- (unsigned long long)displayType;
- (bool)forceCommitBrightness:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 7: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (NSDictionary *)getBrightnessCapabilities;
- (unsigned int)getDisplayId;
- (unsigned long long)getDisplayType;
- (unsigned long long)getProductId;
- (unsigned long long)getSerialNumber;
- (NSUUID *)getUUID;
- (unsigned long long)getVendorId;
- (bool)isBrightnessAvailable;
- (bool)isWhitePointAvailable;
- (bool)isWhitePointD50XYZ;
- (float)maximumLuminance;
- (struct { float x1; float x2; })nativeWhitePoint;
- (unsigned long long)productId;
- (void)registerForNotifications:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSDictionary *, void*
- (unsigned long long)serialNumber;
- (void)setAdaptationScale:(float)arg1;
- (void)setAmbient:(float)arg1;
- (void)setApplyPolicy;
- (void)setBrightnessControlDisabled:(bool)arg1;
- (void)setBrightnessLimit:(float)arg1;
- (void)setContrastEnhancer:(float)arg1;
- (bool)setContrastEnhancer:(float)arg1 rampDuration:(double)arg2 error:(id*)arg3;
- (void)setFilteredAmbient:(float)arg1;
- (void)setHeadroom:(float)arg1;
- (void)setHighAmbientAdaptation:(float)arg1;
- (void)setLowAmbientAdaptation:(float)arg1;
- (void)setNotificationQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setPotentialHeadroom:(float)arg1;
- (void)setReferenceHeadroom:(float)arg1;
- (void)setSDRBrightness:(float)arg1;
- (bool)setWhitePoint:(NSArray *)arg1 rampDuration:(double)arg2 error:(id*)arg3;
- (void)unregisterNotificationBlocks;
- (NSUUID *)uuid;
- (unsigned long long)vendorId;
- (bool)whitePointAvailable;

@end
