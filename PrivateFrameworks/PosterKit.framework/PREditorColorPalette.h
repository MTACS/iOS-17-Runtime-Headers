
@interface PREditorColorPalette : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding> {
    NSArray * _colors;
    bool  _hasGeneratedPickerColors;
    bool  _includesObjectsOfTypePRPosterColor;
    NSString * _localizedName;
    unsigned long long  _paletteType;
    NSArray * _pickerColors;
}

@property (readonly, copy) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasGeneratedPickerColors;
@property (readonly) unsigned long long hash;
@property (readonly) bool includesObjectsOfTypePRPosterColor;
@property (readonly, copy) NSString *localizedName;
@property (readonly) unsigned long long paletteType;
@property (retain) NSArray *pickerColors;
@property (readonly) Class superclass;

+ (id)additionalColorsForExtendedPalette;
+ (id)condensedPalette;
+ (id)condensedPaletteColors;
+ (id)extendedPalette;
+ (id)standardPalette;
+ (id)standardPaletteColors;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)colors;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)generatePickerColorsIfNeededForContext:(unsigned long long)arg1;
- (bool)hasGeneratedPickerColors;
- (unsigned long long)hash;
- (bool)includesObjectsOfTypePRPosterColor;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColors:(id)arg1 localizedName:(id)arg2 showsColorWell:(bool)arg3;
- (id)initWithPickerColors:(id)arg1 colors:(id)arg2 localizedName:(id)arg3 paletteType:(unsigned long long)arg4 showsColorWell:(bool)arg5;
- (id)initWithPickerColors:(id)arg1 localizedName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (unsigned long long)paletteType;
- (id)pickerColors;
- (void)setHasGeneratedPickerColors:(bool)arg1;
- (void)setPickerColors:(id)arg1;
- (bool)shouldShowColorWell;

@end
