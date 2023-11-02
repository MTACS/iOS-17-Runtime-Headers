
@interface CPSActionsViewController : UIViewController <CPSActionButtonLayoutDelegate, CPSButtonDelegate, CPSEntityUpdateSupporting> {
    <CPEntityActionsProviding> * _entity;
    <CPSEntityContentViewControllerDelegate> * _eventDelegate;
    UIFocusGuide * _focusGuide;
    NSArray * _layoutConstraints;
    <CPSActionButtonLayoutDelegate> * _layoutDelegate;
    struct { 
        unsigned int buttonSize : 1; 
        unsigned int buttonGlyphSize : 1; 
        unsigned int font : 1; 
        unsigned int buttonBackgroundColor : 1; 
        unsigned int buttonRadius : 1; 
        unsigned int buttonsShouldFill : 1; 
        unsigned int configureButton : 1; 
    }  _layoutflags;
    UIStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CPEntityActionsProviding> *entity;
@property (nonatomic) <CPSEntityContentViewControllerDelegate> *eventDelegate;
@property (nonatomic, retain) UIFocusGuide *focusGuide;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic) <CPSActionButtonLayoutDelegate> *layoutDelegate;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })buttonGlyphSize;
- (double)buttonRadius;
- (struct CGSize { double x1; double x2; })buttonSize;
- (void)didSelectButton:(id)arg1;
- (id)entity;
- (id)eventDelegate;
- (id)focusGuide;
- (id)initWithEntity:(id)arg1 layoutDelete:(id)arg2;
- (id)layoutConstraints;
- (id)layoutDelegate;
- (void)resetLayoutConstraints;
- (void)setEntity:(id)arg1;
- (void)setEventDelegate:(id)arg1;
- (void)setFocusGuide:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (id)stackView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViews;
- (void)updateWithEntity:(id)arg1;
- (void)viewDidLoad;

@end
