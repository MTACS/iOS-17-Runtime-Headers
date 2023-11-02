
@interface JFXMediaSettings : NSObject <JFXMediaSettingsProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })compositionSize;
+ (int)frameRate;
+ (struct CGSize { double x1; double x2; })frameSize;
+ (id)providerDelegate;
+ (struct CGSize { double x1; double x2; })renderSize;
+ (void)setProviderDelegate:(id)arg1;
+ (id)sharedInstance;
+ (int)timeScale;

- (struct CGSize { double x1; double x2; })compositionSize;
- (int)frameRate;
- (struct CGSize { double x1; double x2; })frameSize;
- (struct CGSize { double x1; double x2; })renderSize;
- (int)timeScale;

@end
