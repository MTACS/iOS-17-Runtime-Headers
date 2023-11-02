
@interface UICustomViewMenuElement : UIMenuElement <_UIMenuLeaf> {
    bool  _forceCustomViewSupport;
    UIMenuElement * _menuElementRepresentation;
    id /* block */  _primaryActionHandler;
    UIImage * _selectedImage;
    id  _sender;
    id /* block */  _viewProvider;
    unsigned long long  attributes;
    NSString * discoverabilityTitle;
    bool  requiresAuthenticatedInput;
    long long  state;
}

@property (setter=_setForceCustomViewSupport:, nonatomic) bool _forceCustomViewSupport;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *discoverabilityTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) bool keepsMenuPresented;
@property (nonatomic, retain) UIMenuElement *menuElementRepresentation;
@property (nonatomic, readonly) <UIPopoverPresentationControllerSourceItem> *presentationSourceItem;
@property (nonatomic, copy) id /* block */ primaryActionHandler;
@property (nonatomic, readonly) bool requiresAuthenticatedInput;
@property (nonatomic, copy) UIImage *selectedImage;
@property (nonatomic, readonly) id sender;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id /* block */ viewProvider;

+ (id)elementWithViewProvider:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (bool)_forceCustomViewSupport;
- (id)_immutableCopy;
- (bool)_isDefaultCommand;
- (bool)_isLeaf;
- (id)_leafAlternates;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (id)_resolvedTargetFromFirstTarget:(id)arg1 sender:(id)arg2;
- (void)_setForceCustomViewSupport:(bool)arg1;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (unsigned long long)attributes;
- (id)contentView;
- (id)discoverabilityTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMenuElement:(id)arg1;
- (bool)keepsMenuPresented;
- (id)menuElementRepresentation;
- (void)performWithSender:(id)arg1 target:(id)arg2;
- (id)presentationSourceItem;
- (id /* block */)primaryActionHandler;
- (bool)requiresAuthenticatedInput;
- (id)selectedImage;
- (id)sender;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(id)arg1;
- (void)setMenuElementRepresentation:(id)arg1;
- (void)setPrimaryActionHandler:(id /* block */)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setViewProvider:(id /* block */)arg1;
- (long long)state;
- (id /* block */)viewProvider;

@end
