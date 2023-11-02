
@interface WFStaccatoConfigurationRemoteViewController : _UIRemoteViewController <WFStaccatoConfigurationServiceHostProtocol> {
    <WFStaccatoConfigurationRemoteViewControllerDelegate> * _delegate;
    WFConfiguredStaccatoAction * _selectedAction;
}

@property (nonatomic) <WFStaccatoConfigurationRemoteViewControllerDelegate> *delegate;
@property (nonatomic, retain) WFConfiguredStaccatoAction *selectedAction;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)didCancelStaccatoConfiguration:(id)arg1;
- (void)didSelectStaccatoAction:(id)arg1;
- (id)selectedAction;
- (void)setDelegate:(id)arg1;
- (void)setSelectedAction:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
