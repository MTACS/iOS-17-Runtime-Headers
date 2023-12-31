
@protocol UAUserActivityClientResponseProtocol <NSObject>

@required

- (void)askClientUserActivityToSave:(NSUUID *)arg1;
- (void)askClientUserActivityToSave:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UAUserActivityInfo *, bool, NSError *, void*
- (void)tellClientDebuggingEnabled:(bool)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)tellClientUserActivityItWasResumed:(NSUUID *)arg1;

@end
