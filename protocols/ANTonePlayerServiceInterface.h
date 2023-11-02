
@protocol ANTonePlayerServiceInterface <NSObject>

@required

- (void)playTone:(void *)arg1 audioSessionID:(void *)arg2 endpointUUID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, unsigned int, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
