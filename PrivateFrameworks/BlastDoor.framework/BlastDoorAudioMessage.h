
@interface BlastDoorAudioMessage : NSObject {
    void audioMessage;
}

@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *inlineAudioMessages;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)content;
- (id)description;
- (id)init;
- (id)inlineAudioMessages;
- (id)participantDestinationIdentifiers;

@end
