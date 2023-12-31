
@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {
    unsigned long long  _accumulatedLength;
    bool  _dataWasBase64;
    unsigned long long  _expectedLength;
    bool  _fetchSucceeded;
    MFActivityMonitor * _monitor;
    MFProgressFilterDataConsumer * _progressFilter;
}

@property (readonly) bool dataWasBase64;
@property (nonatomic) unsigned long long expectedLength;
@property (readonly) bool fetchSucceeded;
@property (nonatomic, retain) MFProgressFilterDataConsumer *progressFilter;

- (void).cxx_destruct;
- (void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(bool)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6;
- (void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4;
- (bool)dataWasBase64;
- (unsigned long long)expectedLength;
- (bool)fetchSucceeded;
- (id)initWithActivityMonitor:(id)arg1;
- (id)progressFilter;
- (void)setExpectedLength:(unsigned long long)arg1;
- (void)setProgressFilter:(id)arg1;

@end
