
@interface PXCMMPosterHeaderViewSpec : NSObject {
    double  _bottomGradientBaselineOffset;
    unsigned int  _bottomGradientFontDescriptorSymbolicTraits;
    long long  _bottomGradientFontTextStyle;
    bool  _canShowStatus;
    double  _statusBaselineOffset;
    unsigned int  _statusFontDescriptorSymbolicTraits;
    long long  _statusFontTextStyle;
    double  _subtitleBaselineOffset;
    unsigned int  _subtitleFontDescriptorSymbolicTraits;
    long long  _subtitleFontTextStyle;
    double  _titleBaselineOffset;
    unsigned int  _titleFontDescriptorSymbolicTraits;
    long long  _titleFontTextStyle;
    double  _topGradientBaselineOffset;
    unsigned int  _topGradientFontDescriptorSymbolicTraits;
    long long  _topGradientFontTextStyle;
}

@property (nonatomic, readonly) double bottomGradientBaselineOffset;
@property (nonatomic, readonly) unsigned int bottomGradientFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) long long bottomGradientFontTextStyle;
@property (nonatomic, readonly) bool canShowStatus;
@property (nonatomic, readonly) UIFont *preferredStatusFont;
@property (nonatomic, readonly) UIFont *preferredSubtitleFont;
@property (nonatomic, readonly) UIFont *preferredTitleFont;
@property (nonatomic, readonly) double scaledBottomGradientBaselineOffset;
@property (nonatomic, readonly) double scaledStatusBaselineOffset;
@property (nonatomic, readonly) double scaledSubtitleBaselineOffset;
@property (nonatomic, readonly) double scaledTitleBaselineOffset;
@property (nonatomic, readonly) double scaledTopGradientBaselineOffset;
@property (nonatomic, readonly) double statusBaselineOffset;
@property (nonatomic, readonly) unsigned int statusFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) long long statusFontTextStyle;
@property (nonatomic, readonly) double subtitleBaselineOffset;
@property (nonatomic, readonly) unsigned int subtitleFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) long long subtitleFontTextStyle;
@property (nonatomic, readonly) double titleBaselineOffset;
@property (nonatomic, readonly) unsigned int titleFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) long long titleFontTextStyle;
@property (nonatomic, readonly) double topGradientBaselineOffset;
@property (nonatomic, readonly) unsigned int topGradientFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) long long topGradientFontTextStyle;

- (double)bottomGradientBaselineOffset;
- (unsigned int)bottomGradientFontDescriptorSymbolicTraits;
- (long long)bottomGradientFontTextStyle;
- (bool)canShowStatus;
- (id)init;
- (id)initWithPresentationStyle:(long long)arg1;
- (id)preferredStatusFont;
- (id)preferredSubtitleFont;
- (id)preferredTitleFont;
- (double)scaledBottomGradientBaselineOffset;
- (double)scaledStatusBaselineOffset;
- (double)scaledSubtitleBaselineOffset;
- (double)scaledTitleBaselineOffset;
- (double)scaledTopGradientBaselineOffset;
- (double)statusBaselineOffset;
- (unsigned int)statusFontDescriptorSymbolicTraits;
- (long long)statusFontTextStyle;
- (double)subtitleBaselineOffset;
- (unsigned int)subtitleFontDescriptorSymbolicTraits;
- (long long)subtitleFontTextStyle;
- (double)titleBaselineOffset;
- (unsigned int)titleFontDescriptorSymbolicTraits;
- (long long)titleFontTextStyle;
- (double)topGradientBaselineOffset;
- (unsigned int)topGradientFontDescriptorSymbolicTraits;
- (long long)topGradientFontTextStyle;

@end
