
@interface GDBiomeStreamStoreErasure : NSObject

+ (id)_createOrLookupStreamWithIdentifier:(id)arg1;
+ (id)_streamWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)deletedEventTimestampsForStream:(id)arg1 error:(id*)arg2;
+ (id)iterateStream:(id)arg1 bookmark:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 maxEvents:(id)arg5 lastN:(id)arg6 reversed:(bool)arg7 body:(id /* block */)arg8;
+ (void)pruneStream:(id)arg1 withReason:(unsigned long long)arg2;
+ (id)publisherForStream:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 maxEvents:(id)arg4 lastN:(id)arg5 reversed:(bool)arg6;
+ (bool)registerForStream:(id)arg1 sourceIdentifier:(id)arg2 callback:(id /* block */)arg3;
+ (bool)validateBookmark:(id)arg1 publisher:(id)arg2 error:(id*)arg3;

@end
