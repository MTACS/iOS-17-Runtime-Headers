
@interface BlastDoorBalloonPluginPayloadWrapper : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  balloonPlugin_Payload;
}

@property (nonatomic, readonly) BlastDoorCombinedPluginAttachmentInfo *combinedPluginAttachmentInfo;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *digitalTouchBalloon;
@property (nonatomic, readonly) NSData *handwriting;
@property (nonatomic, readonly) NSData *linkPresentation;
@property (nonatomic, readonly) NSData *messagesAppBalloon;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)combinedPluginAttachmentInfo;
- (id)description;
- (id)digitalTouchBalloon;
- (id)handwriting;
- (id)init;
- (id)linkPresentation;
- (id)messagesAppBalloon;
- (unsigned long long)type;

@end
