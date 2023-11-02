
@interface EMFDPRecorder : NSObject {
    <EMFDPReportingDelegate> * _delegate;
    NSLock * _delegateLock;
    EMFEmojiToken * _emoji;
}

@property (retain) <EMFDPReportingDelegate> *delegate;
@property (retain) EMFEmojiToken *emoji;
@property (nonatomic, readonly) NSString *recordingKey;

- (void).cxx_destruct;
- (id)delegate;
- (id)emoji;
- (id)initWithEmoji:(id)arg1;
- (id)recordingKey;
- (bool)report;
- (void)setDelegate:(id)arg1;
- (void)setEmoji:(id)arg1;

@end
