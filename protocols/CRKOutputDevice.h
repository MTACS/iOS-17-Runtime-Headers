
@protocol CRKOutputDevice

@required

- (void)displayToDeviceWithPassword:(void *)arg1 suppressPrompt:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSString *)identifier;

@end
