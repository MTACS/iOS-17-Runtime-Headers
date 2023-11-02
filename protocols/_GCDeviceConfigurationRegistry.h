
@protocol _GCDeviceConfigurationRegistry <NSObject>

@required

- (bool)addConfiguration:(_GCDeviceConfiguration *)arg1 replaceExisting:(bool)arg2;
- (_GCDeviceConfiguration *)configurationWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg1;
- (bool)hasConfigurationWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg1;
- (void)refreshActiveConfigurations;
- (void)refreshActiveConfigurationsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)removeConfigurationWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg1;
- (bool)updateConfiguration:(_GCDeviceConfiguration *)arg1;

@end
