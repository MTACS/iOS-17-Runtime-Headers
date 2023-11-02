
@protocol AFContextSnapshotTransforming <NSObject>

@required

- (void)getRedactedContextForContextSnapshot:(void *)arg1 metadata:(void *)arg2 privacyPolicy:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <AFContextSnapshot> *, AFDeviceContextMetadata *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AFContextSnapshot> *, AFDeviceContextMetadata *, void*

@optional

- (void)getAceObjectsForContextSnapshot:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <AFContextSnapshot> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end