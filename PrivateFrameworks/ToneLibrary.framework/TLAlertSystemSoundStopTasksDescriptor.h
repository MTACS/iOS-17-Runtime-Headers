
@interface TLAlertSystemSoundStopTasksDescriptor : NSObject {
    NSMapTable * _interruptedAlertsToSound;
    TLAlertStoppingOptions * _options;
    NSArray * _playbackCompletionContextsToProcess;
    long long  _playbackCompletionType;
}

@property (nonatomic, retain) NSMapTable *interruptedAlertsToSound;
@property (nonatomic, copy) TLAlertStoppingOptions *options;
@property (nonatomic, copy) NSArray *playbackCompletionContextsToProcess;
@property (nonatomic) long long playbackCompletionType;

- (void).cxx_destruct;
- (id)interruptedAlertsToSound;
- (id)options;
- (id)playbackCompletionContextsToProcess;
- (long long)playbackCompletionType;
- (void)setInterruptedAlertsToSound:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPlaybackCompletionContextsToProcess:(id)arg1;
- (void)setPlaybackCompletionType:(long long)arg1;

@end
