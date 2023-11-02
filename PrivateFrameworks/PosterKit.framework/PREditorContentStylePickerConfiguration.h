
@interface PREditorContentStylePickerConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _colorWellDisplayMode;
    NSString * _identifier;
    NSString * _prompt;
    <PRPosterContentStyle> * _selectedStyle;
    bool  _showsSuggestedContentStyleItem;
    PREditorContentStylePalette * _stylePalette;
    <PRPosterContentStyle> * _suggestedStyle;
}

@property (nonatomic) unsigned long long colorWellDisplayMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, copy) <PRPosterContentStyle> *selectedStyle;
@property (nonatomic) bool showsSuggestedContentStyleItem;
@property (nonatomic, retain) PREditorContentStylePalette *stylePalette;
@property (nonatomic, copy) <PRPosterContentStyle> *suggestedStyle;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)colorWellDisplayMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 prompt:(id)arg2 selectedStyle:(id)arg3 stylePalette:(id)arg4 colorWellDisplayMode:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)prompt;
- (id)selectedStyle;
- (void)setColorWellDisplayMode:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setSelectedStyle:(id)arg1;
- (void)setShowsSuggestedContentStyleItem:(bool)arg1;
- (void)setStylePalette:(id)arg1;
- (void)setSuggestedStyle:(id)arg1;
- (bool)showsSuggestedContentStyleItem;
- (id)stylePalette;
- (id)suggestedStyle;

@end
