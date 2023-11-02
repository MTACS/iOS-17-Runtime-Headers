
@protocol NTKBundleComplicationMigrationServiceProtocol

@required

- (void)generateComplicationTypeLookupForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CLKDeviceDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)processRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NTKBundleComplicationMigrationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKWidgetComplicationDescriptor *, NSError *, void*

@end
