
@interface HMDSoftwareUpdateFetchedEvent : HMMLogEvent {
    bool  _newUpdateFetched;
    bool  _userInitiated;
}

@property (getter=wasNewUpdateFetched, nonatomic) bool newUpdateFetched;
@property (getter=wasUserInitiated, nonatomic) bool userInitiated;

+ (id)eventWasUserInitiated:(bool)arg1 wasNewUpdateFetched:(bool)arg2;

- (void)setNewUpdateFetched:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)wasNewUpdateFetched;
- (bool)wasUserInitiated;

@end
