
@protocol IAMMessageMetadataStorage <NSObject>

@required

- (void)metadataForBundleIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)updateMetadata:(void *)arg1 messageIdentifier:(void *)arg2 bundleIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: ICInAppMessageMetadataEntry *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
