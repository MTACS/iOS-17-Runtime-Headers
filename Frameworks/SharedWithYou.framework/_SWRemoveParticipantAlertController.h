
@interface _SWRemoveParticipantAlertController : UIViewController <_SWRemoveParticipantAlertRemoteControllerDelegate> {
    SWCollaborationHighlight * _highlight;
    _SWPerson * _participant;
    long long  _preferredStyle;
    _UIRemoteViewController * _remoteAlertController;
}

@property (nonatomic, retain) SWCollaborationHighlight *highlight;
@property (nonatomic, retain) _SWPerson *participant;
@property (nonatomic) long long preferredStyle;

+ (id)alertControllerWithParticipant:(id)arg1 highlight:(id)arg2 preferredStyle:(long long)arg3;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (id)_initWithParticipant:(id)arg1 highlight:(id)arg2 preferredStyle:(long long)arg3;
- (void)dismissAlert;
- (id)highlight;
- (id)participant;
- (long long)preferredStyle;
- (void)setHighlight:(id)arg1;
- (void)setParticipant:(id)arg1;
- (void)setPreferredStyle:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
