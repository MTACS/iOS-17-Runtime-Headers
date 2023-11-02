
@interface DEDSeedingUploadItem : DEDAttachmentItem {
    long long  _bytesUploaded;
    bool  _completed;
    NSString * _extensionID;
    NSString * _filePromiseUUID;
    long long  _totalBytesExpectedToSend;
    NSURLSessionUploadTask * _uploadTask;
}

@property long long bytesUploaded;
@property bool completed;
@property (retain) NSString *extensionID;
@property (retain) NSString *filePromiseUUID;
@property long long totalBytesExpectedToSend;
@property (retain) NSURLSessionUploadTask *uploadTask;

+ (id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3;

- (void).cxx_destruct;
- (long long)bytesUploaded;
- (bool)completed;
- (id)description;
- (id)extensionID;
- (id)filePromiseUUID;
- (id)promiseFilename;
- (id)publicDescription;
- (void)setBytesUploaded:(long long)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setExtensionID:(id)arg1;
- (void)setFilePromiseUUID:(id)arg1;
- (void)setTotalBytesExpectedToSend:(long long)arg1;
- (void)setUploadTask:(id)arg1;
- (long long)totalBytesExpectedToSend;
- (id)uploadTask;

@end
