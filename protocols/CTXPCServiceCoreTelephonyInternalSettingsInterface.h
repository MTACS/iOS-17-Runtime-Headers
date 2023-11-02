
@protocol CTXPCServiceCoreTelephonyInternalSettingsInterface

@required

- (void)getPrefForKey:(void *)arg1 heirarchy:(void *)arg2 storage:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*
- (void)getRadioPersonality:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*
- (void)setPrefForKey:(void *)arg1 heirarchy:(void *)arg2 value:(void *)arg3 storage:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSArray *, NSObject *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)terminateProcess:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
