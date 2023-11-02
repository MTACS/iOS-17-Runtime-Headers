
@protocol CAMPeopleProximityDelegate

@required

- (void)didDiscoverIdentity:(id <CAMLibrarySelectionIdentityProtocol>)arg1;
- (void)didLoseIdentity:(id <CAMLibrarySelectionIdentityProtocol>)arg1;

@end
