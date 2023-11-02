
@interface MRUViewServiceUpNextViewController : UIViewController <MRUViewServiceViewController> {
    UILabel * _placeholderLabel;
    MPMediaControlsConfiguration * configuration;
    id /* block */  customRowTappedBlock;
    id /* block */  dismissalBlock;
}

@property (nonatomic, retain) MPMediaControlsConfiguration *configuration;
@property (nonatomic, copy) id /* block */ customRowTappedBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *placeholderLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id /* block */)customRowTappedBlock;
- (id /* block */)dismissalBlock;
- (id)placeholderLabel;
- (void)setConfiguration:(id)arg1;
- (void)setCustomRowTappedBlock:(id /* block */)arg1;
- (void)setDismissalBlock:(id /* block */)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)transitionToVisible:(bool)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
