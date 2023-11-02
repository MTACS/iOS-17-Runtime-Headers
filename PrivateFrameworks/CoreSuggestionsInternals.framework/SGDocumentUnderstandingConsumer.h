
@interface SGDocumentUnderstandingConsumer : NSObject <HVMailConsumer, HVMessagesConsumer, HVNotesConsumer, HVRemindersConsumer> {
    DUDocumentHarvesting * _duReceiver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)consumeMailContentWithContext:(id)arg1;
- (id)consumeMessagesContentWithContext:(id)arg1;
- (id)consumeNotesContentWithContext:(id)arg1;
- (id)consumeRemindersContentWithContext:(id)arg1;
- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)arg1;
- (id)init;

@end
