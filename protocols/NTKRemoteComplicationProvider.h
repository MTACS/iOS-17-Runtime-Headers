
@protocol NTKRemoteComplicationProvider <NSObject>

@required

- (void)enumerateComplicationDescriptorsForClientIdentifier:(void *)arg1 family:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationDescriptor *, void*
- (void)enumerateEnabledVendorsForComplicationFamily:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*
- (NSNumber *)itemIdForVendorWithClientIdentifier:(NSString *)arg1;
- (NSString *)localizedAppNameForClientIdentifier:(NSString *)arg1;
- (void)notifyAppForClientIdentifier:(void *)arg1 ofSharedComplicationDescriptors:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)vendorExistsWithClientIdentifier:(NSString *)arg1 appBundleIdentifier:(NSString *)arg2;

@end
