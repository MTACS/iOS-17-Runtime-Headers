
@interface CPSNameViewController : UIViewController <CPSEntityUpdateSupporting> {
    <CPEntityNameProviding> * _entity;
    NSArray * _layoutConstraints;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    CPSNameStackView * _stackView;
    UILabel * _tertiaryLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CPEntityNameProviding> *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, readonly) UILabel *primaryLabel;
@property (nonatomic, readonly) UILabel *secondaryLabel;
@property (nonatomic, readonly) CPSNameStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *tertiaryLabel;

- (void).cxx_destruct;
- (id)entity;
- (id)initWithEntity:(id)arg1;
- (id)layoutConstraints;
- (id)primaryLabel;
- (void)resetLayoutConstraints;
- (id)secondaryLabel;
- (void)setEntity:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (id)stackView;
- (id)tertiaryLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViews;
- (void)updateWithEntity:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
