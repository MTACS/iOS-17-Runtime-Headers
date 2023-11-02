
@interface SBZStackResolverTestRecipe : NSObject <SBFZStackParticipantDelegate, SBTestRecipe> {
    SBFZStackParticipant * _participant;
    bool  _wantsHomeGesture;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBFZStackParticipant *participant;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsHomeGesture;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)participant;
- (void)setParticipant:(id)arg1;
- (void)setWantsHomeGesture:(bool)arg1;
- (void)setWindowScene:(id)arg1;
- (id)title;
- (bool)wantsHomeGesture;
- (id)windowScene;
- (void)windowSceneDidUpdate:(id)arg1;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
