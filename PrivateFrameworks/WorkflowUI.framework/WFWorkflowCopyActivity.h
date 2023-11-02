
@interface WFWorkflowCopyActivity : UIActivity {
    NSURL * _URL;
    NSURL * _excludedURL;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSURL *excludedURL;

- (void).cxx_destruct;
- (id)URL;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)excludedURL;
- (id)initWithExcludedURL:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setURL:(id)arg1;

@end
