
@interface RPFileTransferResumeStateItem : NSObject {
    NSMutableDictionary * _fileInfo;
}

- (void).cxx_destruct;
- (unsigned long long)bytesWritten;
- (void)dealloc;
- (id)error;
- (id)fileInfo;
- (unsigned long long)fileModTime;
- (unsigned long long)fileModTimeNsec;
- (id)fileName;
- (unsigned long long)fileOffset;
- (unsigned long long)fileSize;
- (id)initWithFileTransferRequestDict:(id)arg1;
- (id)initWithStateDict:(id)arg1;
- (id)itemURL;
- (bool)outputFileItemUsable:(id)arg1;
- (void)setBytesWritten:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setFileModTime:(unsigned long long)arg1;
- (void)setFileModTimeNsec:(unsigned long long)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileOffset:(unsigned long long)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setItemURL:(id)arg1;
- (bool)sourceFileItemUsable;

@end
