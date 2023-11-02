
@interface _UIEditMenuListItem : NSObject {
    UIView * _customView;
    unsigned long long  _displayMode;
    UIImage * _image;
    UIMenuElement * _menuElement;
    long long  _options;
    double  _overrideMinimumWidth;
    UISPasteVariant * _pasteVariant;
    NSString * _title;
    bool  _wantsPasteSlotView;
}

@property (nonatomic, readonly) UIView *customView;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIMenuElement *menuElement;
@property (nonatomic, readonly) long long options;
@property (nonatomic) double overrideMinimumWidth;
@property (nonatomic, readonly) UISPasteVariant *pasteVariant;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) bool wantsPasteSlotView;

+ (id)itemWithMenuElement:(id)arg1;
+ (id)itemWithTitle:(id)arg1;

- (void).cxx_destruct;
- (id)customView;
- (id)description;
- (unsigned long long)displayMode;
- (bool)hidesImageForTraitCollection:(id)arg1;
- (bool)hidesTitleForTraitCollection:(id)arg1;
- (id)image;
- (id)menuElement;
- (long long)options;
- (double)overrideMinimumWidth;
- (id)pasteVariant;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setOverrideMinimumWidth:(double)arg1;
- (void)setWantsPasteSlotView:(bool)arg1;
- (id)title;
- (bool)wantsPasteSlotView;

@end
