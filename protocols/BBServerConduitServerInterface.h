
@protocol BBServerConduitServerInterface <NSObject>

@required

- (void)sendMessageToDataProviderSectionID:(NSString *)arg1 name:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)weeAppWithBundleID:(void *)arg1 getHiddenFromUser:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)weeAppWithBundleID:(NSString *)arg1 setHiddenFromUser:(bool)arg2;

@end
