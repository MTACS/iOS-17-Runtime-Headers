
@interface DESFedStatsRecorder : NSObject <DESFedStatsRecorderProtocol>

+ (void)initialize;

- (bool)record:(id)arg1 data:(id)arg2 dataTypeContent:(id)arg3 metadata:(id)arg4 errorOut:(id*)arg5;
- (bool)record:(id)arg1 data:(id)arg2 encodingSchema:(id)arg3 metadata:(id)arg4 errorOut:(id*)arg5;

@end
