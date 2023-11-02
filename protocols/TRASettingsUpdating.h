
@protocol TRASettingsUpdating <NSObject>

@required

- (void)updateAmbientPresentationSettingsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRAMutableSettingsAmbientPresentation *, void*
- (void)updateOrientationSettingsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRAMutableSettingsOrientation *, void*
- (void)updateUserInterfaceOrientationSettingsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRAMutableSettingsUserInterfaceStyle *, void*
- (void)updateZOrderLevelSettingsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRAMutableSettingsZOrderLevel *, void*

@end
