
@interface WFWorkflowActivityViewController : UIActivityViewController <UIActivityViewControllerObjectManipulationDelegate> {
    WFWorkflowLinkProvider * _linkProvider;
    long long  _selectedDestination;
    long long  _selectedMode;
    WFSignedShortcutFileProvider * _signedShortcutFileProvider;
    WFWorkflow * _workflow;
    WFFileRepresentation * _workflowFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowLinkProvider *linkProvider;
@property (nonatomic) long long selectedDestination;
@property (nonatomic) long long selectedMode;
@property (nonatomic, retain) WFSignedShortcutFileProvider *signedShortcutFileProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFWorkflow *workflow;
@property (nonatomic, retain) WFFileRepresentation *workflowFile;

- (void).cxx_destruct;
- (bool)_customizationAvailableForActivityViewController:(id)arg1;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (void)_customizationsDidChange;
- (id)generateSharingDestinationGroup;
- (id)generateSharingModeGroup;
- (id)initWithWorkflow:(id)arg1 applicationActivities:(id)arg2;
- (id)linkProvider;
- (long long)selectedDestination;
- (long long)selectedMode;
- (void)setLinkProvider:(id)arg1;
- (void)setSelectedDestination:(long long)arg1;
- (void)setSelectedMode:(long long)arg1;
- (void)setSignedShortcutFileProvider:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (void)setWorkflowFile:(id)arg1;
- (id)signedShortcutFileProvider;
- (id)workflow;
- (id)workflowFile;

@end
