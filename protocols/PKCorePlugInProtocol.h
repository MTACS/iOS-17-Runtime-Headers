
@protocol PKCorePlugInProtocol

@required

- (NSDictionary *)_userInfo;
- (void)beginUsingPlugIn:(void *)arg1 ready:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKServicePersonality *, id, void*
- (void)hostHasControl;
- (void)prefsObjectForKey:(void *)arg1 inPlugIn:(void *)arg2 result:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)prefsSetObject:(void *)arg1 forKey:(void *)arg2 inPlugIn:(void *)arg3 result:(void *)arg4; // needs 4 arg types, found 8: id, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareUsing:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*
- (void)prepareUsingPlugIn:(void *)arg1 hostProtocol:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)set_userInfo:(NSDictionary *)arg1;
- (void)shutdownPlugIn;

@end
