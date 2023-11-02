
@interface AssistantVoiceControllerVoiceSettings : NSObject {
    AFVoiceInfo * _currentVoice;
    AFVoiceInfo * _inProgressVoice;
}

@property (nonatomic, retain) AFVoiceInfo *currentVoice;
@property (nonatomic, retain) AFVoiceInfo *inProgressVoice;

+ (id)settingsWithInProgressVoice:(id)arg1 currentVoice:(id)arg2;

- (void).cxx_destruct;
- (id)currentVoice;
- (id)inProgressVoice;
- (void)setCurrentVoice:(id)arg1;
- (void)setInProgressVoice:(id)arg1;

@end
