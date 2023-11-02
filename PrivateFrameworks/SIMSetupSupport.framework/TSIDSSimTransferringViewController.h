
@interface TSIDSSimTransferringViewController : PRXCardContentViewController <TSSetupFlowItem> {
    <TSSIMSetupFlowDelegate> * _delegate;
    UIActivityIndicatorView * _indicatorView;
    UILabel * _placeHolderLabel;
    UIStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIActivityIndicatorView *indicatorView;
@property (nonatomic, copy) UILabel *placeHolderLabel;
@property (retain) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)indicatorView;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)placeHolderLabel;
- (void)setDelegate:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setPlaceHolderLabel:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end
