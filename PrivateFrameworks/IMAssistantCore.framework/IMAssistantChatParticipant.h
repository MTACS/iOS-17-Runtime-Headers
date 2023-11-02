
@interface IMAssistantChatParticipant : NSObject {
    IMAssistantHandleFromContact * _handleFromContact;
    IMHandle * _imHandle;
}

@property (nonatomic, readonly) IMAssistantHandleFromContact *handleFromContact;
@property (nonatomic, readonly) IMHandle *imHandle;

- (void).cxx_destruct;
- (id)description;
- (id)handleFromContact;
- (id)imHandle;
- (id)initWithIMHandle:(id)arg1 handleFromContact:(id)arg2;

@end
