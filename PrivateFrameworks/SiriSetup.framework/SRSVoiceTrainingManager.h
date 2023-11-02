
@interface SRSVoiceTrainingManager : NSObject <SSRVTUITrainingManagerDelegate> {
    <SRSTrainingManagerDelegate> * _delegate;
    SSRVTUITrainingManager * _trainingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SRSTrainingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)VTUITrainingManagerFeedLevel:(float)arg1;
- (void)cancelTrainingForSessionId:(long long)arg1;
- (void)cleanupWithCompletion:(id /* block */)arg1;
- (long long)convertStatus:(int)arg1;
- (id)delegate;
- (id)initWithLanguageCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startRMS;
- (void)stopRMS;
- (void)trainUtterance:(long long)arg1 shouldUseASR:(bool)arg2 completion:(id /* block */)arg3;
- (id)voiceProfile;

@end
