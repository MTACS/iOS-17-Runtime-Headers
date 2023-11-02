
@interface BlastDoorBasicTextMessageMessageTypeWrapper : NSObject {
    void basicTextMessage_MessageType;
}

@property (nonatomic, readonly) BlastDoorBasicAudioMessage *audioMessage;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorBasicTapBack *tapback;
@property (nonatomic, readonly) BlastDoorBasicMessage *textMessage;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorBasicTypingIndicator *typingIndicator;
@property (nonatomic, readonly) BlastDoorUnsupportedMessage *unsupported;

- (void).cxx_destruct;
- (id)audioMessage;
- (id)description;
- (id)init;
- (id)tapback;
- (id)textMessage;
- (unsigned long long)type;
- (id)typingIndicator;
- (id)unsupported;

@end
