
@interface PREditorColorPickerConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    PREditorColorPalette * _colorPalette;
    <UIPopoverPresentationControllerSourceItem> * _colorPickerSourceItem;
    UIView * _colorPickerSourceView;
    unsigned long long  _colorWellDisplayMode;
    unsigned long long  _context;
    NSString * _identifier;
    bool  _includesObjectsOfTypePRPickerColor;
    NSString * _prompt;
    id  _selectedColor;
    bool  _showsSlider;
    bool  _showsSuggestedColorItem;
    PRPosterColor * _suggestedColor;
    NSArray * _suggestedColors;
}

@property (nonatomic, retain) PREditorColorPalette *colorPalette;
@property (nonatomic, retain) <UIPopoverPresentationControllerSourceItem> *colorPickerSourceItem;
@property (nonatomic, retain) UIView *colorPickerSourceView;
@property (nonatomic) unsigned long long colorWellDisplayMode;
@property (nonatomic) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) bool includesObjectsOfTypePRPickerColor;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, copy) id selectedColor;
@property (nonatomic) bool showsSlider;
@property (nonatomic) bool showsSuggestedColorItem;
@property (nonatomic, copy) PRPosterColor *suggestedColor;
@property (nonatomic, copy) NSArray *suggestedColors;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)colorPalette;
- (id)colorPickerSourceItem;
- (id)colorPickerSourceView;
- (unsigned long long)colorWellDisplayMode;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)didUpdateColors;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (bool)includesObjectsOfTypePRPickerColor;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 prompt:(id)arg2 selectedColor:(id)arg3 suggestedColors:(id)arg4 colorPalette:(id)arg5 colorWellDisplayMode:(unsigned long long)arg6 showsSlider:(bool)arg7 context:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (id)prompt;
- (id)selectedColor;
- (void)setColorPalette:(id)arg1;
- (void)setColorPickerSourceItem:(id)arg1;
- (void)setColorPickerSourceView:(id)arg1;
- (void)setColorWellDisplayMode:(unsigned long long)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShowsSlider:(bool)arg1;
- (void)setShowsSuggestedColorItem:(bool)arg1;
- (void)setSuggestedColor:(id)arg1;
- (void)setSuggestedColors:(id)arg1;
- (bool)showsSlider;
- (bool)showsSuggestedColorItem;
- (id)suggestedColor;
- (id)suggestedColors;

@end
