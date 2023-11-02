
@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider> {
    SBScreenFlash * _flasher;
    UIScreen * _screen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBScreenFlash *flasher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScreen *screen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)captureScreenshot;
- (id)flasher;
- (id)initWithScreen:(id)arg1;
- (id)screen;

@end
