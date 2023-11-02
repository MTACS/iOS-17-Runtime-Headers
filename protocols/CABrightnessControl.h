
@protocol CABrightnessControl <NSObject, CABrightnessTransaction>

@required

- (bool)abortWhitePointRamp:(struct { float x1[9]; }*)arg1 error:(id*)arg2;
- (bool)brightnessAvailable;
- (NSDictionary *)brightnessCapabilities;
- (unsigned int)displayId;
- (long long)displayType;
- (double)maximumHDRLuminance;
- (double)maximumReferenceLuminance;
- (double)maximumSDRLuminance;
- (double)minimumLuminance;
- (unsigned long long)productId;
- (void)registerForNotifications:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSDictionary *, void*
- (void)registerForSyncNotifications:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSDictionary *, void*
- (unsigned int)serviceObject;
- (void)setMaximumHDRLuminance:(double)arg1;
- (void)setMaximumReferenceLuminance:(double)arg1;
- (void)setMaximumSDRLuminance:(double)arg1;
- (void)setMinimumLuminance:(double)arg1;
- (void)setNotificationQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setSyncNotificationQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (bool)setWhitePoint:(const struct { float x1[9]; }*)arg1 rampDuration:(double)arg2 error:(id*)arg3;
- (void)unregisterNotificationBlocks;
- (void)unregisterSyncNotificationBlocks;
- (NSUUID *)uuid;
- (unsigned long long)vendorId;
- (bool)whitePointAvailable;
- (bool)whitePointD50XYZ;

@end
