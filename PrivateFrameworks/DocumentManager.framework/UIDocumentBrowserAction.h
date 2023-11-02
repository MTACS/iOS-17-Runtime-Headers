
@interface UIDocumentBrowserAction : NSObject <NSCopying, NSSecureCoding> {
    long long  _actionStyle;
    long long  _availability;
    NSPredicate * _filteringPredicate;
    id /* block */  _handler;
    NSString * _identifier;
    UIImage * _image;
    NSString * _localizedTitle;
    unsigned long long  _menuSortOrder;
    long long  _navigationSide;
    bool  _performActionExitsEditMode;
    bool  _requiresResolvedItems;
    bool  _requiresVersioning;
    id /* block */  _resolvedHandler;
    long long  _style;
    NSArray * _supportedContentTypes;
    bool  _supportsMultipleItems;
    UIDocumentBrowserActionDescriptor * _uiActionDescriptor;
    FPProviderDomain * _uiActionProviderDomain;
    NSString * _uiActionProviderIdentifier;
    id /* block */  _unresolvedHandler;
}

@property (nonatomic) long long actionStyle;
@property (nonatomic) long long availability;
@property (nonatomic, retain) NSPredicate *filteringPredicate;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) unsigned long long menuSortOrder;
@property (nonatomic) long long navigationSide;
@property (nonatomic) bool performActionExitsEditMode;
@property (nonatomic) bool requiresResolvedItems;
@property (nonatomic) bool requiresVersioning;
@property (nonatomic, copy) id /* block */ resolvedHandler;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSArray *supportedContentTypes;
@property (nonatomic) bool supportsMultipleItems;
@property (nonatomic, retain) UIDocumentBrowserActionDescriptor *uiActionDescriptor;
@property (nonatomic, copy) FPProviderDomain *uiActionProviderDomain;
@property (nonatomic, copy) NSString *uiActionProviderIdentifier;
@property (nonatomic, copy) id /* block */ unresolvedHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actionStyle;
- (long long)availability;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filteringPredicate;
- (id /* block */)handler;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 availability:(long long)arg3 handler:(id /* block */)arg4;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 resolvedHandler:(id /* block */)arg3;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 unresolvedHandler:(id /* block */)arg3;
- (id)initWithUIActionDescriptor:(id)arg1 providerDomain:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (unsigned long long)menuSortOrder;
- (long long)navigationSide;
- (bool)performActionExitsEditMode;
- (bool)requiresResolvedItems;
- (bool)requiresVersioning;
- (id /* block */)resolvedHandler;
- (void)setActionStyle:(long long)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setFilteringPredicate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMenuSortOrder:(unsigned long long)arg1;
- (void)setNavigationSide:(long long)arg1;
- (void)setPerformActionExitsEditMode:(bool)arg1;
- (void)setRequiresResolvedItems:(bool)arg1;
- (void)setRequiresVersioning:(bool)arg1;
- (void)setResolvedHandler:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSupportedContentTypes:(id)arg1;
- (void)setSupportsMultipleItems:(bool)arg1;
- (void)setUiActionDescriptor:(id)arg1;
- (void)setUiActionProviderDomain:(id)arg1;
- (void)setUiActionProviderIdentifier:(id)arg1;
- (void)setUnresolvedHandler:(id /* block */)arg1;
- (long long)style;
- (id)supportedContentTypes;
- (bool)supportsMultipleItems;
- (id)uiActionDescriptor;
- (id)uiActionProviderDomain;
- (id)uiActionProviderIdentifier;
- (id /* block */)unresolvedHandler;

@end