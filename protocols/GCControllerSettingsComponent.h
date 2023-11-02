
@protocol GCControllerSettingsComponent <GCControllerComponent>

@required

- (id /* block */)changedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <GCControllerSettingsComponent> *, void*, id, SEL
- (void)setChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCControllerSettingsComponent> *, void*
- (GCSProfile *)settingsProfile;

@end
