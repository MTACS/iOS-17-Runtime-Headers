
@protocol BMSharedSyncableStream

@required

- (NSArray *)accountsWithError:(id*)arg1;
- (BMSharedPublishers *)publishersForAccounts:(void *)arg1 deviceTypes:(void *)arg2 withUseCase:(void *)arg3 startTime:(void *)arg4 endTime:(void *)arg5 maxEvents:(void *)arg6 lastN:(void *)arg7 reversed:(void *)arg8 includeLocal:(void *)arg9 pipeline:(void *)arg10; // needs 10 arg types, found 15: NSArray *, unsigned int, NSString *, NSNumber *, NSNumber *, NSNumber *, NSNumber *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <BPSPublisher> *, id /* block */, BMBookmarkablePublisher *, void*

@end
