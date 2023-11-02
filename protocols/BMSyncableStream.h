
@protocol BMSyncableStream

@required

- (BMPublishers *)publishersForDevices:(void *)arg1 startTime:(void *)arg2 endTime:(void *)arg3 maxEvents:(void *)arg4 lastN:(void *)arg5 reversed:(void *)arg6 includeLocal:(void *)arg7 pipeline:(void *)arg8; // needs 8 arg types, found 13: NSArray *, NSNumber *, NSNumber *, NSNumber *, NSNumber *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <BPSPublisher> *, id /* block */, BMBookmarkablePublisher *, void*
- (BMPublishers *)publishersForDevices:(void *)arg1 startTime:(void *)arg2 includeLocal:(void *)arg3 pipeline:(void *)arg4; // needs 4 arg types, found 9: NSArray *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <BPSPublisher> *, id /* block */, BMBookmarkablePublisher *, void*
- (BMPublishers *)publishersForDevices:(void *)arg1 withUseCase:(void *)arg2 startTime:(void *)arg3 endTime:(void *)arg4 maxEvents:(void *)arg5 lastN:(void *)arg6 reversed:(void *)arg7 includeLocal:(void *)arg8 pipeline:(void *)arg9; // needs 9 arg types, found 14: NSArray *, NSString *, NSNumber *, NSNumber *, NSNumber *, NSNumber *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <BPSPublisher> *, id /* block */, BMBookmarkablePublisher *, void*
- (BMPublishers *)publishersForDevices:(void *)arg1 withUseCase:(void *)arg2 startTime:(void *)arg3 includeLocal:(void *)arg4 pipeline:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <BPSPublisher> *, id /* block */, BMBookmarkablePublisher *, void*
- (BMPublishers *)publishersForRemoteDevices:(void *)arg1 startTime:(void *)arg2 endTime:(void *)arg3 maxEvents:(void *)arg4 lastN:(void *)arg5 reversed:(void *)arg6 includeLocal:(void *)arg7 pipeline:(void *)arg8; // needs 8 arg types, found 13: NSArray *, NSNumber *, NSNumber *, NSNumber *, NSNumber *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <BPSPublisher> *, id /* block */, BMBookmarkablePublisher *, void*
- (BMPublishers *)publishersForRemoteDevices:(void *)arg1 startTime:(void *)arg2 includeLocal:(void *)arg3 pipeline:(void *)arg4; // needs 4 arg types, found 9: NSArray *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <BPSPublisher> *, id /* block */, BMBookmarkablePublisher *, void*
- (NSArray *)remoteDevices;
- (NSArray *)remoteDevicesWithError:(id*)arg1;

@end
