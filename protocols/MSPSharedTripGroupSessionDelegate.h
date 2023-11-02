
@protocol MSPSharedTripGroupSessionDelegate <NSObject>

@required

- (void)groupSession:(MSPSharedTripGroupSession *)arg1 participantDidJoin:(NSString *)arg2;
- (void)groupSession:(MSPSharedTripGroupSession *)arg1 participantDidLeave:(NSString *)arg2;
- (void)groupSessionEnded:(MSPSharedTripGroupSession *)arg1 withError:(NSError *)arg2;

@end
