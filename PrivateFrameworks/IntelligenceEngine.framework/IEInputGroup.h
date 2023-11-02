
@interface IEInputGroup : NSObject {
    bool  _canUseServerTTS;
    NSString * _dialogPhase;
    bool  _immersiveExperience;
    NSString * _inputGroupId;
    bool  _listenAfterSpeaking;
    NSDictionary * _nlParameters;
}

@property (nonatomic) bool canUseServerTTS;
@property (nonatomic, retain) NSString *dialogPhase;
@property (nonatomic) bool immersiveExperience;
@property (nonatomic, retain) NSString *inputGroupId;
@property (nonatomic) bool listenAfterSpeaking;
@property (nonatomic, retain) NSDictionary *nlParameters;

- (void).cxx_destruct;
- (bool)canUseServerTTS;
- (id)dialogPhase;
- (bool)immersiveExperience;
- (id)initWithId:(id)arg1;
- (id)inputGroupId;
- (bool)listenAfterSpeaking;
- (id)nlParameters;
- (void)setCanUseServerTTS:(bool)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setImmersiveExperience:(bool)arg1;
- (void)setInputGroupId:(id)arg1;
- (void)setListenAfterSpeaking:(bool)arg1;
- (void)setNlParameters:(id)arg1;

@end
