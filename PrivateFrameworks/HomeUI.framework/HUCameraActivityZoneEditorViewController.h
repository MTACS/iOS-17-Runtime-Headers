
@interface HUCameraActivityZoneEditorViewController : UIViewController <HFCameraLiveStreamControllerDelegate, HUCameraActivityZoneCanvasDelegate> {
    HUCameraActivityZoneCanvasView * _activityZoneCanvas;
    HMCameraProfile * _cameraProfile;
    NSArray * _initialActivityZones;
    bool  _initialSettingDetectsInclusionZones;
    HUCameraLiveStreamViewController * _liveStreamViewController;
    UILabel * _tutorialLabel;
}

@property (nonatomic, retain) HUCameraActivityZoneCanvasView *activityZoneCanvas;
@property (nonatomic, retain) HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActivityZoneChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *initialActivityZones;
@property (nonatomic) bool initialSettingDetectsInclusionZones;
@property (nonatomic, retain) HUCameraLiveStreamViewController *liveStreamViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *tutorialLabel;

- (void).cxx_destruct;
- (id)_addZoneButton;
- (void)_displayProgressIndicatorWhileLoading;
- (void)_refreshUI;
- (void)_updateNavigationBar;
- (void)_updateToolbar;
- (void)_updateTutorialText;
- (void)_updateViewsForTraitCollection;
- (id)activityZoneCanvas;
- (id)cameraProfile;
- (void)cancelEditing;
- (void)commitChangesAndDismissEditor;
- (void)dealloc;
- (void)didAttemptToAddOverlappingLineForCanvas:(id)arg1;
- (void)didAttemptToCreateOverlappingZoneForCanvas:(id)arg1;
- (void)didAttemptToMovePointToOverlapZoneForCanvas:(id)arg1;
- (void)didUpdateActivityZone:(id)arg1;
- (void)didUpdateActivityZoneCanvas:(id)arg1;
- (void)displayActivityZoneState;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)displayErrorAlert;
- (void)displayLineOverlapAlert;
- (void)displayMoveOverlapAlert;
- (void)displayUnCommittedChangesAlert;
- (void)displayZoneOverlapAlert;
- (bool)hasActivityZoneChanges;
- (id)initWithCameraProfile:(id)arg1;
- (id)initialActivityZones;
- (bool)initialSettingDetectsInclusionZones;
- (void)invertZones;
- (id)liveStreamViewController;
- (void)setActivityZoneCanvas:(id)arg1;
- (void)setCameraProfile:(id)arg1;
- (void)setInitialActivityZones:(id)arg1;
- (void)setInitialSettingDetectsInclusionZones:(bool)arg1;
- (void)setLiveStreamViewController:(id)arg1;
- (void)setTutorialLabel:(id)arg1;
- (void)streamControllerStateDidUpdate:(id)arg1;
- (id)tutorialLabel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
