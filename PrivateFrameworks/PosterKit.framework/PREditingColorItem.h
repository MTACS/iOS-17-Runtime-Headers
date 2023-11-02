
@interface PREditingColorItem : NSObject {
    unsigned long long  _context;
    bool  _fromUIKitColorPicker;
    UIView * _itemView;
    <PREditorColorPickerColor> * _pickerColor;
    bool  _pickerRespondsToDisplayColorSelector;
    bool  _showsSlider;
    double  _variation;
}

@property (nonatomic, readonly) PRPosterColor *baseColor;
@property (nonatomic, readonly) PRPosterColor *color;
@property (nonatomic) unsigned long long context;
@property (nonatomic, readonly) PRPosterColor *displayColor;
@property (getter=isFromUIKitColorPicker, nonatomic) bool fromUIKitColorPicker;
@property (nonatomic, retain) UIView *itemView;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) <PREditorColorPickerColor> *pickerColor;
@property (nonatomic, readonly) bool pickerRespondsToDisplayColorSelector;
@property (getter=shouldShowSlider, nonatomic) bool showsSlider;
@property (nonatomic) double variation;

+ (id)_legibleIconColorForBackgroundColor:(id)arg1;
+ (id)suggestedColorItemWithColor:(id)arg1 context:(unsigned long long)arg2;
+ (id)vibrantMaterialItem;

- (void).cxx_destruct;
- (id)baseColor;
- (id)color;
- (unsigned long long)context;
- (id)description;
- (id)displayColor;
- (id)initWithPickerColor:(id)arg1 variation:(double)arg2 context:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFromUIKitColorPicker;
- (id)itemView;
- (id)localizedName;
- (id)pickerColor;
- (bool)pickerRespondsToDisplayColorSelector;
- (void)setContext:(unsigned long long)arg1;
- (void)setFromUIKitColorPicker:(bool)arg1;
- (void)setItemView:(id)arg1;
- (void)setShowsSlider:(bool)arg1;
- (void)setVariation:(double)arg1;
- (bool)shouldShowSlider;
- (double)variation;

@end
