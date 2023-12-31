
@protocol CKDMMCSItemReaderWriterProtocol <NSObject>

@required

- (CKDMMCSItem *)MMCSItem;
- (CKDMMCSItemGroupContext *)MMCSRequest;
- (bool)closeWithError:(id*)arg1;
- (CKFileMetadata *)getFileMetadataWithError:(id*)arg1;
- (bool)openWithError:(id*)arg1;
- (bool)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5;

@optional

- (C3DownloadChunkContext *)downloadChunkContext;

@end
