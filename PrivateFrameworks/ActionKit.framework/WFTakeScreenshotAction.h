
@interface WFTakeScreenshotAction : WFAction {
    FBSDisplayLayoutMonitor * _displayLayoutMonitor;
}

@property (nonatomic, retain) FBSDisplayLayoutMonitor *displayLayoutMonitor;

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (void).cxx_destruct;
- (void)cancel;
- (id)contentDestinationWithError:(id*)arg1;
- (id)displayLayoutMonitor;
- (void)notifyVisibleScenesOfScreenshot:(id /* block */)arg1;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)screenshotDisplay:(id)arg1 error:(id*)arg2;
- (void)setDisplayLayoutMonitor:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)takeScreenshot;

@end
