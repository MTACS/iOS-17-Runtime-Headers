
@interface SVXPlatformDependency : NSObject {
    <SVXSessionActivityListening> * _activityListener;
    <SVXAudioPowerUpdateListening> * _audioPowerUpdateListener;
    <SVXAudioStreamingListening> * _audioStreamingListener;
    <SVXClientAudioSystemServicing> * _clientAudioSystemService;
    <SVXServiceCommandHandling> * _serviceCommandHandler;
    <SVXSiriModesManaging> * _siriModesManager;
    <SVXSpeechSynthesisListening> * _speechSynthesisListener;
    long long  _type;
}

@property (nonatomic, readonly) <SVXSessionActivityListening> *activityListener;
@property (nonatomic, readonly) <SVXAudioPowerUpdateListening> *audioPowerUpdateListener;
@property (nonatomic, readonly) <SVXAudioStreamingListening> *audioStreamingListener;
@property (nonatomic, readonly) <SVXClientAudioSystemServicing> *clientAudioSystemService;
@property (nonatomic, readonly) <SVXServiceCommandHandling> *serviceCommandHandler;
@property (nonatomic, readonly) <SVXSiriModesManaging> *siriModesManager;
@property (nonatomic, readonly) <SVXSpeechSynthesisListening> *speechSynthesisListener;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)activityListener;
- (id)audioPowerUpdateListener;
- (id)audioStreamingListener;
- (id)clientAudioSystemService;
- (id)initWithAudioPowerUpdateListener:(id)arg1;
- (id)initWithAudioStreamingListener:(id)arg1;
- (id)initWithClientAudioSystemService:(id)arg1;
- (id)initWithServiceCommandHandler:(id)arg1;
- (id)initWithSessionActivityListener:(id)arg1;
- (id)initWithSiriModesManager:(id)arg1;
- (id)initWithSpeechSynthesisListener:(id)arg1;
- (id)serviceCommandHandler;
- (id)siriModesManager;
- (id)speechSynthesisListener;
- (long long)type;

@end
