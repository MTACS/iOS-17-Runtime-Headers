
@protocol PXSettingsConfigurationsSourceObserver

@required

- (void)settingsConfigurationSource:(PXSettingsConfigurationsSource *)arg1 didChange:(PXArrayChangeDetails *)arg2;
- (void)settingsConfigurationSource:(void *)arg1 performChanges:(void *)arg2; // needs 2 arg types, found 6: PXSettingsConfigurationsSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
