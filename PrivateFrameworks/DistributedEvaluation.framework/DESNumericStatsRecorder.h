
@interface DESNumericStatsRecorder : NSObject <DESFedStatsRecorderProtocol>

+ (id)constructErrorWith:(id)arg1;

- (bool)donateData:(id)arg1 toKey:(id)arg2 withMetadata:(id)arg3 recorder:(id)arg4;
- (bool)record:(id)arg1 data:(id)arg2 dataTypeContent:(id)arg3 metadata:(id)arg4 errorOut:(id*)arg5;
- (bool)record:(id)arg1 data:(id)arg2 encodingSchema:(id)arg3 metadata:(id)arg4 errorOut:(id*)arg5;

@end
