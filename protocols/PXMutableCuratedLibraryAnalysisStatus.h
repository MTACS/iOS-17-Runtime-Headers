
@protocol PXMutableCuratedLibraryAnalysisStatus <NSObject>

@required

- (float)displayProgress;
- (bool)isDaysMonthsYearsStructureEnabled;
- (bool)isDevicePlugged;
- (NSString *)localizedDescription;
- (NSString *)localizedTitle;
- (float)progress;
- (void)setDisplayProgress:(float)arg1;
- (void)setIsDaysMonthsYearsStructureEnabled:(bool)arg1;
- (void)setIsDevicePlugged:(bool)arg1;
- (void)setLocalizedDescription:(NSString *)arg1;
- (void)setLocalizedTitle:(NSString *)arg1;
- (void)setProgress:(float)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
