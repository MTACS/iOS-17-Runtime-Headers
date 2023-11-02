
@interface DEDRadarUploadItem : DEDAttachmentItem {
    bool  _isUploaded;
    NSString * _radarAttachmentName;
    NSURL * _radarURL;
    unsigned long long  _taskIdentifier;
    long long  _totalBytesExpectedToSend;
    long long  _totalBytesSent;
}

@property (nonatomic) bool isUploaded;
@property (nonatomic, retain) NSString *radarAttachmentName;
@property (nonatomic, retain) NSURL *radarURL;
@property (nonatomic) unsigned long long taskIdentifier;
@property (nonatomic) long long totalBytesExpectedToSend;
@property (nonatomic) long long totalBytesSent;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUploadTask:(id)arg1 andAttachment:(id)arg2;
- (bool)isUploaded;
- (id)radarAttachmentName;
- (id)radarURL;
- (void)setIsUploaded:(bool)arg1;
- (void)setRadarAttachmentName:(id)arg1;
- (void)setRadarURL:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (void)setTotalBytesExpectedToSend:(long long)arg1;
- (void)setTotalBytesSent:(long long)arg1;
- (unsigned long long)taskIdentifier;
- (long long)totalBytesExpectedToSend;
- (long long)totalBytesSent;

@end
