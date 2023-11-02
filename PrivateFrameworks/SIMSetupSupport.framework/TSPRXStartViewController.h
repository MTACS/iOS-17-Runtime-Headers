
@interface TSPRXStartViewController : PRXCardContentViewController <TSSetupFlowItem> {
    PRXAction * _action;
    SSProximityDevice * _client;
    <TSSIMSetupFlowDelegate> * _delegate;
    UIImageView * _radioImageView;
}

@property (retain) PRXAction *action;
@property (retain) SSProximityDevice *client;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIImageView *radioImageView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startClientFlow;
- (id)action;
- (id)client;
- (id)delegate;
- (id)initWithBtDevice:(id)arg1;
- (id)radioImageView;
- (void)setAction:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRadioImageView:(id)arg1;
- (void)viewDidLoad;

@end
