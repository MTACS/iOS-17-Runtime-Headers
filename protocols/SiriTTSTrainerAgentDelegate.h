
@protocol SiriTTSTrainerAgentDelegate <NSObject>

@required

- (oneway void)installingTrainingAsset:(SiriTTSTrainingAsset *)arg1 progress:(float)arg2;

@end
