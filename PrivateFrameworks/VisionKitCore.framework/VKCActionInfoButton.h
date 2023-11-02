
@interface VKCActionInfoButton : UIButton {
    NSArray * _allUnfilteredElements;
    DDUIAction * _defaultAction;
    <VKCActionInfoButtonDelegate> * _delegate;
    UIImage * _image;
    bool  _isMoreButton;
    UIImage * _menuImage;
    UIImageSymbolConfiguration * _preferredSymbolConfiguration;
    VKCBaseDataDetectorElement * _representedElement;
    NSString * _text;
}

@property (nonatomic, retain) NSArray *allUnfilteredElements;
@property (nonatomic, retain) UIMenu *customMenu;
@property (nonatomic, retain) DDUIAction *defaultAction;
@property (nonatomic) <VKCActionInfoButtonDelegate> *delegate;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isMoreButton;
@property (nonatomic, retain) UIImage *menuImage;
@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, retain) VKCBaseDataDetectorElement *representedElement;
@property (nonatomic, retain) NSString *text;

+ (id)buttonWithImage:(id)arg1 text:(id)arg2;

- (void).cxx_destruct;
- (void)_vk_performAction;
- (id)allUnfilteredElements;
- (id /* block */)buttonConfigurationTextAttributesTransformer;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)customMenu;
- (id)dataDetectorContext;
- (id)defaultAction;
- (id)defaultSymbolConfigurationForImage;
- (id)delegate;
- (id)filledButtonConfiguration;
- (bool)hasAction:(SEL)arg1;
- (id)image;
- (bool)isMoreButton;
- (id)menuImage;
- (long long)overrideUserInterfaceStyle;
- (void)performDefaultElementAction;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)preferredSymbolConfiguration;
- (id)representedElement;
- (void)setAllUnfilteredElements:(id)arg1;
- (void)setCustomMenu:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsMoreButton:(bool)arg1;
- (void)setMenuImage:(id)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setRepresentedElement:(id)arg1;
- (void)setText:(id)arg1;
- (void)tearDown;
- (id)text;
- (id)translucentButtonConfiguration;
- (id)translucentSelectedButtonConfiguration;
- (void)vk_addTarget:(id)arg1 action:(SEL)arg2;

@end
