
@interface WFStopSharingWorkflowActivity : UIActivity {
    WFSharedShortcut * _shortcut;
    WFCloudKitTask * _unshareTask;
}

@property (nonatomic, retain) WFSharedShortcut *shortcut;
@property (nonatomic, retain) WFCloudKitTask *unshareTask;

- (void).cxx_destruct;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setUnshareTask:(id)arg1;
- (id)shortcut;
- (id)unshareTask;

@end
