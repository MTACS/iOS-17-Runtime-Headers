
@protocol PFLNetworkProvider <NSObject>

@required

- (void)fetchModelForTask:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PFLTaskConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)fetchTasks:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)uploadDeviceResult:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PFLDeviceResults *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
