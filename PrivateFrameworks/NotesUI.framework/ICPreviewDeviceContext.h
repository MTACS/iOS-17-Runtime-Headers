
@interface ICPreviewDeviceContext : NSObject {
    NSArray * _deviceScales;
    NSArray * _nonScalableDeviceInfo;
    NSArray * _scalableDeviceInfo;
}

@property (readonly) NSArray *deviceScales;
@property (readonly) double maxDeviceScale;
@property (copy) NSArray *nonScalableDeviceInfo;
@property (copy) NSArray *scalableDeviceInfo;

+ (id)sharedContext;

- (void).cxx_destruct;
- (void)dealloc;
- (id)deviceInfoScalable:(bool)arg1;
- (id)deviceScales;
- (id)init;
- (double)maxDeviceScale;
- (double)maxSizeOfPreviewDeviceInfoImage;
- (id)nonScalableDeviceInfo;
- (id)scalableDeviceInfo;
- (void)screensChangedNotification:(id)arg1;
- (void)setNonScalableDeviceInfo:(id)arg1;
- (void)setScalableDeviceInfo:(id)arg1;

@end
