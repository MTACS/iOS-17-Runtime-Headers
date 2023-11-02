
@protocol SSScreenshotAssetManagerBackend <NSObject>

@required

- (void)imageForPreviouslyRegisteredIdentifier:(void *)arg1 imageHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (void)registerEntryWithImage:(void *)arg1 options:(void *)arg2 identifierHandler:(void *)arg3; // needs 3 arg types, found 9: UIImage *, SSScreenshotAssetManagerRegistrationOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)removeEntryWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)saveImageToTemporaryLocation:(void *)arg1 withName:(void *)arg2 imageDescription:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: UIImage *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)updateImageData:(void *)arg1 withModificationData:(void *)arg2 forEntryWithIdentifier:(void *)arg3 registrationOptions:(void *)arg4 imageDescription:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSData *, NSData *, NSString *, SSScreenshotAssetManagerRegistrationOptions *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
