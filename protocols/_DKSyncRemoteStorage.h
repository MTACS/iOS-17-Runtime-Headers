
@protocol _DKSyncRemoteStorage

@required

- (void)cancelOutstandingOperations;
- (void)fetchSourceDeviceIDFromPeer:(void *)arg1 highPriority:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: _DKSyncPeer *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSString *, NSError *, void*
- (bool)isAvailable;
- (NSString *)name;
- (void)start;
- (long long)transportType;

@end
