
@protocol AudioComponentRegistrarProtocol

@required

- (void)canRegisterComponent:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getComponentList:(void *)arg1 linkedSDKRequiresEntitlement:(void *)arg2 includeExtensions:(void *)arg3 forceWaitForExtensions:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 13: NSString *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, bool, NSData *, NSArray *, void*

@end
