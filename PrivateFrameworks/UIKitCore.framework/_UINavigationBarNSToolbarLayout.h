
@interface _UINavigationBarNSToolbarLayout : NSObject <NSCopying> {
    id /* block */  _backButtonHandler;
    UIImage * _backButtonImage;
    NSString * _backButtonTitle;
    NSArray * _centerGroups;
    NSString * _customizationIdentifier;
    UISearchTextField * _inlineSearchTextField;
    NSArray * _leadingGroups;
    long long  _location;
    UIBarButtonItemGroup * _pinnedTrailingGroup;
    id /* block */  _representedDragItemsProvider;
    NSURL * _representedURL;
    bool  _showSidebarToggle;
    long long  _style;
    NSString * _title;
    NSArray * _trailingGroups;
}

@property (nonatomic, copy) id /* block */ backButtonHandler;
@property (nonatomic, retain) UIImage *backButtonImage;
@property (nonatomic, copy) NSString *backButtonTitle;
@property (nonatomic, copy) NSArray *centerGroups;
@property (nonatomic, copy) NSString *customizationIdentifier;
@property (nonatomic, retain) UISearchTextField *inlineSearchTextField;
@property (nonatomic, copy) NSArray *leadingGroups;
@property (nonatomic) long long location;
@property (nonatomic, retain) UIBarButtonItemGroup *pinnedTrailingGroup;
@property (nonatomic, copy) id /* block */ representedDragItemsProvider;
@property (nonatomic, copy) NSURL *representedURL;
@property (nonatomic) bool showSidebarToggle;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *trailingGroups;

- (void).cxx_destruct;
- (id)_initWithLayout:(id)arg1;
- (id /* block */)backButtonHandler;
- (id)backButtonImage;
- (id)backButtonTitle;
- (id)centerGroups;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customizationIdentifier;
- (id)description;
- (id)inlineSearchTextField;
- (id)leadingGroups;
- (long long)location;
- (id)pinnedTrailingGroup;
- (id /* block */)representedDragItemsProvider;
- (id)representedURL;
- (void)setBackButtonHandler:(id /* block */)arg1;
- (void)setBackButtonImage:(id)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (void)setCenterGroups:(id)arg1;
- (void)setCustomizationIdentifier:(id)arg1;
- (void)setInlineSearchTextField:(id)arg1;
- (void)setLeadingGroups:(id)arg1;
- (void)setLocation:(long long)arg1;
- (void)setPinnedTrailingGroup:(id)arg1;
- (void)setRepresentedDragItemsProvider:(id /* block */)arg1;
- (void)setRepresentedURL:(id)arg1;
- (void)setShowSidebarToggle:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrailingGroups:(id)arg1;
- (bool)showSidebarToggle;
- (long long)style;
- (id)title;
- (id)trailingGroups;

@end
