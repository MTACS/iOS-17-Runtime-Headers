
@protocol CLLocationManagerRoutineClientInterface <NSObject>

@required

- (void)didUpdateInertialData:(NSArray *)arg1;
- (void)didUpdateLocations:(NSArray *)arg1;
- (void)didUpdateLocations:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
