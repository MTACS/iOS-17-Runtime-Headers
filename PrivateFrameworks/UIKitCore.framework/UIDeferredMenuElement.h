
@interface UIDeferredMenuElement : UIMenuElement <_UIMenuLeaf> {
    unsigned long long  _attributes;
    bool  _cachesItems;
    <UIDeferredMenuElementDelegate> * _delegate;
    NSString * _discoverabilityTitle;
    id /* block */  _elementProvider;
    bool  _fulfilled;
    NSArray * _fulfilledElements;
    bool  _isSignalingFulfillment;
    id  _metadata;
    bool  _requiresAuthenticatedInput;
    UIImage * _selectedImage;
    id  _sender;
    long long  _state;
}

@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic, readonly) bool cachesItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDeferredMenuElementDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *discoverabilityTitle;
@property (nonatomic, copy) id /* block */ elementProvider;
@property (nonatomic, readonly) bool fulfilled;
@property (nonatomic, readonly, copy) NSArray *fulfilledElements;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) bool keepsMenuPresented;
@property (nonatomic, retain) id metadata;
@property (nonatomic, readonly) <UIPopoverPresentationControllerSourceItem> *presentationSourceItem;
@property (nonatomic, readonly) bool requiresAuthenticatedInput;
@property (nonatomic, copy) UIImage *selectedImage;
@property (nonatomic, readonly) id sender;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_elementCachingItems:(bool)arg1 provider:(id /* block */)arg2;
+ (id)elementWithProvider:(id /* block */)arg1;
+ (id)elementWithUncachedProvider:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_fulfillIfNecessary;
- (id)_immutableCopy;
- (bool)_isDefaultCommand;
- (bool)_isLeaf;
- (bool)_isLoadingPlaceholder;
- (id)_leafAlternates;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (id)_resolvedTargetFromFirstTarget:(id)arg1 sender:(id)arg2;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (unsigned long long)attributes;
- (bool)cachesItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (id)discoverabilityTitle;
- (id /* block */)elementProvider;
- (void)encodeWithCoder:(id)arg1;
- (bool)fulfilled;
- (id)fulfilledElements;
- (id)initWithCoder:(id)arg1;
- (bool)keepsMenuPresented;
- (id)metadata;
- (void)performWithSender:(id)arg1 target:(id)arg2;
- (id)presentationSourceItem;
- (bool)requiresAuthenticatedInput;
- (id)selectedImage;
- (id)sender;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoverabilityTitle:(id)arg1;
- (void)setElementProvider:(id /* block */)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
