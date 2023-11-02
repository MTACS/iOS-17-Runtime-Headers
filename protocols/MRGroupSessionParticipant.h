
@protocol MRGroupSessionParticipant <NSObject>

@required

- (NSString *)identifier;
- (MRUserIdentity *)identity;
- (bool)isPending;

@end
