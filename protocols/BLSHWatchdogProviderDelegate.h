
@protocol BLSHWatchdogProviderDelegate <NSObject>

@required

- (void)abortForWatchdog:(unsigned long long)arg1 payload:(void*)arg2 payloadSize:(unsigned int)arg3 explanation:(NSString *)arg4;
- (bool)isTailspinAvailable;
- (bool)panicForWatchdog:(NSString *)arg1;
- (void)writeTailspinForWatchdog:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*

@optional

- (void)didFinishDumpingStateForWatchdog:(NSString *)arg1;
- (bool)isTesting;

@end
