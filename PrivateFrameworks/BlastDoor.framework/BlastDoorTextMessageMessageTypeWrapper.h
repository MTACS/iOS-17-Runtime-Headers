
@interface BlastDoorTextMessageMessageTypeWrapper : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  textMessage_MessageType;
}

@property (nonatomic, readonly) BlastDoorAudioMessage *audioMessage;
@property (nonatomic, readonly) BlastDoorBalloonPlugin *balloonPlugin;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorSticker *sticker;
@property (nonatomic, readonly) BlastDoorTapBack *tapback;
@property (nonatomic, readonly) BlastDoorMessage *textMessage;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorTypingIndicator *typingIndicator;

- (void).cxx_destruct;
- (id)audioMessage;
- (id)balloonPlugin;
- (id)description;
- (id)init;
- (id)sticker;
- (id)tapback;
- (id)textMessage;
- (unsigned long long)type;
- (id)typingIndicator;

@end
