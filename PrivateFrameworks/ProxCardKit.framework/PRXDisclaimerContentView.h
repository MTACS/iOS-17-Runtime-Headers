
@interface PRXDisclaimerContentView : PRXScrollableContentView {
    NSArray * _contentConstraints;
    UIView * _disclaimerContainerView;
    PRXLabel * _disclaimerLabel;
    PRXButton * _moreInfoButton;
}

@property (nonatomic, readonly) PRXLabel *disclaimerLabel;
@property (nonatomic, retain) PRXButton *moreInfoButton;

- (void).cxx_destruct;
- (id)disclaimerLabel;
- (id)initWithCardStyle:(long long)arg1;
- (id)moreInfoButton;
- (void)setMoreInfoButton:(id)arg1;
- (void)updateConstraints;

@end
