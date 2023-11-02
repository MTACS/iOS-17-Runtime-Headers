
@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> * consumer;
    int  format;
    MFMessage * message;
    MFMimePart * part;
    bool  partial;
    MFDAMessageStore * store;
}

@property (nonatomic, readonly) bool isUserRequested;
@property (nonatomic, readonly) bool shouldSend;

- (void).cxx_destruct;
- (unsigned long long)generationNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isUserRequested;
- (bool)shouldSend;

@end
