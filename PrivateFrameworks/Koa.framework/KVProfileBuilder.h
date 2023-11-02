
@interface KVProfileBuilder : NSObject {
    KVDatasetBuilder * _activeDataset;
    unsigned int  _datasetCount;
    NSURL * _fileURL;
    KVProfileInfo * _profileInfo;
    NSOutputStream * _stream;
    NSObject<KVProfileWriter> * _writer;
}

+ (id)builderWithProfileInfo:(id)arg1 format:(unsigned char)arg2 error:(id*)arg3;
+ (id)fileWriterWithProfileInfo:(id)arg1 targetDirectory:(id)arg2 filename:(id)arg3 format:(unsigned char)arg4 error:(id*)arg5;
+ (id)fileWriterWithProfileInfo:(id)arg1 targetDirectory:(id)arg2 format:(unsigned char)arg3 error:(id*)arg4;
+ (void)initalize;

- (void).cxx_destruct;
- (id)_buildWithError:(id*)arg1;
- (id)_fileURL;
- (bool)_finishWithError:(id*)arg1;
- (id)addDataset:(id)arg1 error:(id*)arg2;
- (id)buildWithError:(id*)arg1;
- (id)finishWritingWithError:(id*)arg1;
- (id)init;
- (id)initWithProfileInfo:(id)arg1 outputStream:(id)arg2 fileURL:(id)arg3 format:(unsigned char)arg4 provider:(id)arg5 error:(id*)arg6;

@end
