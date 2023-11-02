
@interface LPCollaborationFooterStyle : NSObject {
    UIColor * _backgroundColor;
    LPPointUnit * _cornerRadius;
    LPTextViewStyle * _handle;
    bool  _ignoreSafeAreaInset;
    LPPointUnit * _indicatorSpacing;
    LPPadding * _margin;
    LPTextViewStyle * _options;
    LPPadding * _padding;
    LPPadding * _separatorMargin;
    bool  _showSeparator;
    bool  _useFullWidth;
    bool  _useFullWidthDuringSizing;
    bool  _useInlineIndicator;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) LPPointUnit *cornerRadius;
@property (nonatomic, readonly) LPTextViewStyle *handle;
@property (nonatomic) bool ignoreSafeAreaInset;
@property (nonatomic, retain) LPPointUnit *indicatorSpacing;
@property (nonatomic, readonly, retain) LPPadding *margin;
@property (nonatomic, readonly) LPTextViewStyle *options;
@property (nonatomic, readonly, retain) LPPadding *padding;
@property (nonatomic, readonly, retain) LPPadding *separatorMargin;
@property (nonatomic) bool showSeparator;
@property (nonatomic) bool useFullWidth;
@property (nonatomic) bool useFullWidthDuringSizing;
@property (nonatomic) bool useInlineIndicator;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)cornerRadius;
- (id)handle;
- (bool)ignoreSafeAreaInset;
- (id)indicatorSpacing;
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 fontScalingFactor:(double)arg3;
- (id)margin;
- (id)options;
- (id)padding;
- (id)separatorMargin;
- (void)setBackgroundColor:(id)arg1;
- (void)setCornerRadius:(id)arg1;
- (void)setIgnoreSafeAreaInset:(bool)arg1;
- (void)setIndicatorSpacing:(id)arg1;
- (void)setShowSeparator:(bool)arg1;
- (void)setUseFullWidth:(bool)arg1;
- (void)setUseFullWidthDuringSizing:(bool)arg1;
- (void)setUseInlineIndicator:(bool)arg1;
- (bool)showSeparator;
- (bool)useFullWidth;
- (bool)useFullWidthDuringSizing;
- (bool)useInlineIndicator;

@end
