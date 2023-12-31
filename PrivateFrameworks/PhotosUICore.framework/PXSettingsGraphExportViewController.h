
@interface PXSettingsGraphExportViewController : UIViewController <MFMailComposeViewControllerDelegate> {
    bool  _exportGraphOnViewDidAppear;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_exportGraph;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
