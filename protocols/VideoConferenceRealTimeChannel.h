
@protocol VideoConferenceRealTimeChannel

@required

- (void)vcArg:(id)arg1 sendRealTimeData:(NSData *)arg2 toParticipantID:(NSString *)arg3;

@end
