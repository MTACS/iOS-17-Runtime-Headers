
@protocol MPCPlaybackIntentDataSource <NSObject>

@required

- (void)getRemotePlaybackQueueFromIntent:(void *)arg1 destination:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MPCPlaybackIntent *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPRemotePlaybackQueue *, NSError *, void*

@optional

- (void)getArchiveFromIntent:(void *)arg1 configuration:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MPCPlaybackIntent *, MPPlaybackArchiveConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPPlaybackArchive *, NSError *, void*
- (void)getRepresentativeObjectFromIntent:(void *)arg1 properties:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: MPCPlaybackIntent *, MPPropertySet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPModelGenericObject *, ICURLAggregatedPerformanceMetrics *, NSError *, void*

@end
