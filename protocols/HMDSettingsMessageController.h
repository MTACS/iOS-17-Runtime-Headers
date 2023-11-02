
@protocol HMDSettingsMessageController

@required

- (void)updateWithEncodedValue:(void *)arg1 onSettingKeyPath:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSUUID *)userUUID;

@end
