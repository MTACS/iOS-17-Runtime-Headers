
@interface SBWallpaperLegibilitySettingsProvider : NSObject <PBUIWallpaperObserver, SBFLegibilitySettingsProvider> {
    <SBFLegibilitySettingsProviderDelegate> * _delegate;
    long long  _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithVariant:(long long)arg1;
- (id)legibilitySettings;
- (void)setDelegate:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;

@end
