
@protocol VCSessionParticipantStreamDelegate <NSObject>

@required

- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didStopWithError:(NSError *)arg2;

@end
