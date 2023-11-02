
@interface AMSStreamHTTPArchiveEntryController : NSObject

+ (id)_createNewFileWithError:(id*)arg1 outputDirectory:(id)arg2 forCombining:(bool)arg3;
+ (id)_footerData;
+ (id)_harFileURLsInPath:(id)arg1;
+ (id)_headerData;
+ (void)_performCombiningFiles:(id)arg1 toStream:(id)arg2;
+ (void)_periodicCleanup;
+ (bool)_shouldWriteEntryDirectlyToDiskForURLString:(id)arg1;
+ (void)_streamToDiskWithEntries:(id)arg1;
+ (void)_updateMaxBufferSize;
+ (bool)_writeData:(id)arg1 enumeratingBytesToStream:(id)arg2;
+ (void)_writeEntries:(id)arg1 toStream:(id)arg2;
+ (bool)_writeFooterToStream:(id)arg1;
+ (bool)_writeHeaderToStream:(id)arg1;
+ (void)ams_addEntriesForTaskInfo:(id)arg1;
+ (id)ams_combineEntriesForPath:(id)arg1 error:(id*)arg2;
+ (void)ams_streamEntriesToDisk;
+ (id)buffer;
+ (void)initialize;

@end
