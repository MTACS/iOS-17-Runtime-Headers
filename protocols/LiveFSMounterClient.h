
@protocol LiveFSMounterClient

@required

- (void)createDomain:(void *)arg1 displayName:(void *)arg2 how:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)createDomain:(void *)arg1 how:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
