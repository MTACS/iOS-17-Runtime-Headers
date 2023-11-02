
@interface LNTranscriptPrivilegedProvider : LNTranscriptProvider

+ (id)xpcInterface;

- (void)donateActionRecordData:(id)arg1 bundleIdentifier:(id)arg2 timestamp:(double)arg3 writeImmediately:(bool)arg4 reply:(id /* block */)arg5;
- (id)transcriptPublisherWithStreamName:(id)arg1 fromDate:(id)arg2 error:(id*)arg3;
- (id)transcriptPublisherWithStreamName:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 maxEvents:(id)arg4 reversed:(bool)arg5 error:(id*)arg6;

@end
