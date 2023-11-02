
@interface BlastDoorAudioMessageAttachmentInfo : NSObject {
    void audioMessageAttachmentInfo;
}

@property (nonatomic, readonly) NSString *audioTranscription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *inlineAttachmentKey;

- (void).cxx_destruct;
- (id)audioTranscription;
- (id)description;
- (id)init;
- (id)inlineAttachmentKey;

@end
