
@interface WFRecordAudioAction : WFAction

@property (nonatomic, readonly) long long outputFormat;
@property (nonatomic, readonly) double recordingDuration;
@property (nonatomic, readonly) bool startImmediately;

+ (id)datedFilenameForFormat:(long long)arg1;
+ (id)fileTypeForFormat:(long long)arg1;
+ (bool)outputIsExemptFromTaintTrackingInheritance;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)contentDestinationWithError:(id*)arg1;
- (long long)outputFormat;
- (double)recordingDuration;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (bool)startImmediately;

@end
