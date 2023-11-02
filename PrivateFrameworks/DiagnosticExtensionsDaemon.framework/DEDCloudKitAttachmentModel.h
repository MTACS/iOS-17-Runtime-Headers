
@interface DEDCloudKitAttachmentModel : DEDCloudKitBaseModel {
    NSNumber * _fileSize;
    NSString * _queueItem;
    NSURL * _url;
}

@property (retain) NSNumber *fileSize;
@property (retain) NSString *queueItem;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (id)fileSize;
- (id)initWithURL:(id)arg1 withQueueItem:(id)arg2 parameters:(id)arg3;
- (id)modelName;
- (id)queueItem;
- (void)setFileSize:(id)arg1;
- (void)setQueueItem:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
