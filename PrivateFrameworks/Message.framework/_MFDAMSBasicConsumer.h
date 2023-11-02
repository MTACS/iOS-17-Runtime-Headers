
@interface _MFDAMSBasicConsumer : MFBufferedQueue {
    MFError * error;
    MFMailMessageLibrary * library;
    MFDAMailbox * mailbox;
    MFActivityMonitor * monitor;
    unsigned long long  numNewMessages;
    MFDAMessageStore * store;
}

@property (nonatomic, retain) MFError *error;
@property (nonatomic, retain) MFActivityMonitor *monitor;

- (void).cxx_destruct;
- (void)dealloc;
- (id)error;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (id)monitor;
- (void)setError:(id)arg1;
- (void)setMonitor:(id)arg1;

@end
