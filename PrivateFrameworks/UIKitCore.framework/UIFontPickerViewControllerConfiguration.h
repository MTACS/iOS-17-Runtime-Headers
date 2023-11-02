
@interface UIFontPickerViewControllerConfiguration : NSObject <BSDescriptionProviding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    NSXPCListenerEndpoint * __clientFontContextEndpoint;
    NSString * __filterFamilyName;
    bool  __hideSearchBar;
    bool  __includeDefaultFont;
    bool  __showsSectionIndexBar;
    UIColor * __tintColor;
    bool  _displayUsingSystemFont;
    NSPredicate * _filteredLanguagesPredicate;
    unsigned int  _filteredTraits;
    bool  _includeFaces;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *_clientFontContextEndpoint;
@property (nonatomic, copy) NSString *_filterFamilyName;
@property (setter=_setHideSearchBar:, nonatomic) bool _hideSearchBar;
@property (nonatomic) bool _includeDefaultFont;
@property (nonatomic) bool _showsSectionIndexBar;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayUsingSystemFont;
@property (nonatomic, copy) NSPredicate *filteredLanguagesPredicate;
@property (nonatomic) unsigned int filteredTraits;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeFaces;
@property (readonly) Class superclass;

+ (id)filterPredicateForFilteredLanguages:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_clientFontContextEndpoint;
- (id)_filterFamilyName;
- (bool)_hideSearchBar;
- (bool)_includeDefaultFont;
- (void)_setHideSearchBar:(bool)arg1;
- (void)_setTintColor:(id)arg1;
- (bool)_showsSectionIndexBar;
- (id)_tintColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)displayUsingSystemFont;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredLanguagesPredicate;
- (unsigned int)filteredTraits;
- (bool)includeFaces;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDisplayUsingSystemFont:(bool)arg1;
- (void)setFilteredLanguagesPredicate:(id)arg1;
- (void)setFilteredTraits:(unsigned int)arg1;
- (void)setIncludeFaces:(bool)arg1;
- (void)set_clientFontContextEndpoint:(id)arg1;
- (void)set_filterFamilyName:(id)arg1;
- (void)set_includeDefaultFont:(bool)arg1;
- (void)set_showsSectionIndexBar:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
