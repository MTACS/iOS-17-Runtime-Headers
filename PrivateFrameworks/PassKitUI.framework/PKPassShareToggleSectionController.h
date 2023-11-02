
@interface PKPassShareToggleSectionController : PKPassShareSectionController {
    <PKPassShareToggleSectionControllerDelegate> * _delegate;
    NSString * _footerText;
    UIImage * _icon;
    NSString * _identifier;
    bool  _isEditable;
    NSString * _title;
    bool  _toggleValue;
}

@property (nonatomic) <PKPassShareToggleSectionControllerDelegate> *delegate;
@property (nonatomic) NSString *footerText;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) bool toggleValue;

- (void).cxx_destruct;
- (id)cellRegistrationForItem:(id)arg1;
- (void)decorateCell:(id)arg1 forIdentifier:(id)arg2;
- (id)delegate;
- (id)footerAttributedStringForIdentifier:(id)arg1;
- (id)footerText;
- (id)icon;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 toggleValue:(bool)arg3 isEditable:(bool)arg4 delegate:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setToggleValue:(bool)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (bool)toggleValue;
- (void)toggleValueDidChange:(id)arg1;

@end
