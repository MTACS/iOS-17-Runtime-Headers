
@interface BUZipFileWriter : BUZipWriter {
    <BURandomWriteChannel> * _writeChannel;
    id /* block */  _writeChannelCompletionHandler;
}

+ (void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(id /* block */)arg5;
+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithZipFileArchive:(id)arg1 error:(id*)arg2;
- (id)initWithZipFileArchive:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* block */)arg1;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(id /* block */)arg2;

@end
