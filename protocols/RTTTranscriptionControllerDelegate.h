
@protocol RTTTranscriptionControllerDelegate

@required

- (void)transcriptionDidStart:(NSString *)arg1 forCallUUID:(NSString *)arg2;
- (void)transcriptionDidUpdate:(NSString *)arg1 forCallUUID:(NSString *)arg2;

@end
