
@protocol ARRemoteSensorService <NSObject>

@required

- (void)providedDataTypesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)start;
- (void)stop;

@end
