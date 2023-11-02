
@interface TipsNextEventReporter : NSObject {
    void appBundleId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)donateReceivedPhotoEventWatch;
- (void)donateSavedPhotoEventWatch;
- (void)donateSentINSendMessageIntentEvent;
- (void)donateSentMessageEvent;
- (void)donateSentSetNameAndPhotoProfileEvent;
- (void)donateSentTapbackEventWatch;
- (id)init;

@end
