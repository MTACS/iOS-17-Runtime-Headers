
@interface SpeakerRecognition.SSRVTUITrainingManagerHelper : NSObject {
    void currentAsset;
    void delegate;
    void profile;
}

- (void).cxx_destruct;
- (id)getCurrentAsset;
- (id)init;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)initWithProfile:(id)arg1 withDelegate:(id)arg2;
- (void)setLocaleIdentifierWithLocaleIdentifier:(id)arg1;
- (void)setProfileAndDelegateWithProfile:(id)arg1 withDelegate:(id)arg2;
- (id)voiceProfile;

@end
