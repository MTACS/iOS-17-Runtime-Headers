
@interface PKPaletteAttributeViewController : UIViewController {
    bool  _didExperienceUserInteraction;
    bool  _didSendDismissStatistics;
    NSString * _toolIdentifier;
}

@property (nonatomic) bool didExperienceUserInteraction;
@property (nonatomic) bool didSendDismissStatistics;
@property (nonatomic, retain) NSString *toolIdentifier;

- (void).cxx_destruct;
- (bool)didExperienceUserInteraction;
- (bool)didSendDismissStatistics;
- (void)setDidExperienceUserInteraction:(bool)arg1;
- (void)setDidSendDismissStatistics:(bool)arg1;
- (void)setToolIdentifier:(id)arg1;
- (id)toolIdentifier;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
