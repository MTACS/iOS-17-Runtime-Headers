
@protocol GTLaunchService

@required

- (bool)foregroundService:(unsigned long long)arg1 error:(id*)arg2;
- (bool)launchReplayService:(GTLaunchRequest *)arg1 error:(id*)arg2;
- (void)processStateForService:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GTProcessState *, NSError *, void*
- (bool)resumeService:(unsigned long long)arg1 error:(id*)arg2;
- (void)symbolicatorForService:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*

@end
