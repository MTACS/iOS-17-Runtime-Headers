
@protocol COMeshBaseBallotCommandProtocol <NSObject>

@required

- (COBallot *)ballot;
- (unsigned long long)generation;
- (long long)variant;

@end
