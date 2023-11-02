
@interface SBExternalDisplayWallpaperController : NSObject <SBFZStackParticipantDelegate> {
    SBFWindow * _window;
    SBFZStackParticipant * _zStackParticipant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFWindow *window;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;

- (void).cxx_destruct;
- (id)initWithWindowScene:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)setZStackParticipant:(id)arg1;
- (id)window;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
