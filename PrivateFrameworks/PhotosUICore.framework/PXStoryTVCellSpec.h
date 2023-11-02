
@interface PXStoryTVCellSpec : PXFeatureSpec {
    UIFont * _subtitleFont;
    NSDictionary * _subtitleSupportedCharactersAttributes;
    NSDictionary * _subtitleUnsupportedCharactersAttributes;
    UIFont * _titleFont;
    NSDictionary * _titleSupportedCharactersAttributes;
    NSDictionary * _titleUnsupportedCharactersAttributes;
}

@property (nonatomic, readonly) UIFont *memorySubtitleFont;
@property (nonatomic, readonly) double memorySubtitleLeading;
@property (nonatomic, readonly) double memorySubtitleTracking;
@property (nonatomic, readonly) UIFont *memoryTitleFont;
@property (nonatomic, readonly) double memoryTitleLeading;
@property (nonatomic, readonly) double memoryTitleTracking;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (nonatomic, readonly) NSDictionary *subtitleSupportedCharactersAttributes;
@property (nonatomic, readonly) NSDictionary *subtitleUnsupportedCharactersAttributes;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) NSDictionary *titleSupportedCharactersAttributes;
@property (nonatomic, readonly) NSDictionary *titleUnsupportedCharactersAttributes;

- (void).cxx_destruct;
- (bool)_isSupportedCharacterSetForFontDescriptor:(id)arg1 fontSize:(double)arg2 string:(id)arg3 supportedCharacterAttributes:(id)arg4 leading:(double)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_languageAwareOutsetsForFont:(id)arg1;
- (id)_setupSubtitleAttributesWithAllCharactersSupported:(bool)arg1;
- (id)_setupSubtitleFont;
- (id)_setupTitleAttributesWithAllCharactersSupported:(bool)arg1;
- (id)_setupTitleFont;
- (id)attributedStringForSubtitle:(id)arg1;
- (id)attributedStringForTitle:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)memorySubtitleFont;
- (double)memorySubtitleLeading;
- (double)memorySubtitleTracking;
- (id)memoryTitleFont;
- (double)memoryTitleLeading;
- (double)memoryTitleTracking;
- (id)subtitleFont;
- (id)subtitleSupportedCharactersAttributes;
- (id)subtitleUnsupportedCharactersAttributes;
- (id)titleFont;
- (id)titleSupportedCharactersAttributes;
- (id)titleUnsupportedCharactersAttributes;

@end
