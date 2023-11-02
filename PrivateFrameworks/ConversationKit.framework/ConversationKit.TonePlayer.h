
@interface ConversationKit.TonePlayer : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastPlayedConnectedToneUUID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastPlayedSoundDate;
    void lastPlayedSoundEventType;
    void soundPlayer;
}

- (void).cxx_destruct;
- (id)init;

@end
