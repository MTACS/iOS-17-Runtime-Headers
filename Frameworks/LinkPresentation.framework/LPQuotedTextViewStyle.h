
@interface LPQuotedTextViewStyle : LPTextViewStyle <NSCopying> {
    LPTextViewStyle * _characterLimitIndicatorStyle;
    UIFont * _longPullQuoteFont;
    unsigned int  _maximumLinesToConsiderShort;
    bool  _showCharacterLimitIndicator;
    bool  _showQuoteIndicator;
}

@property (nonatomic, readonly, retain) LPTextViewStyle *characterLimitIndicatorStyle;
@property (nonatomic, retain) UIFont *longPullQuoteFont;
@property (nonatomic) unsigned int maximumLinesToConsiderShort;
@property (nonatomic) bool showCharacterLimitIndicator;
@property (nonatomic) bool showQuoteIndicator;

- (void).cxx_destruct;
- (id)adjustedForString:(id)arg1;
- (id)characterLimitIndicatorStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 fontScalingFactor:(double)arg3;
- (id)longPullQuoteFont;
- (unsigned int)maximumLinesToConsiderShort;
- (void)setLongPullQuoteFont:(id)arg1;
- (void)setMaximumLinesToConsiderShort:(unsigned int)arg1;
- (void)setShowCharacterLimitIndicator:(bool)arg1;
- (void)setShowQuoteIndicator:(bool)arg1;
- (bool)showCharacterLimitIndicator;
- (bool)showQuoteIndicator;

@end
