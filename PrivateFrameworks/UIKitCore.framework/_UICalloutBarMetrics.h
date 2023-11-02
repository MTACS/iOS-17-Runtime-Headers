
@interface _UICalloutBarMetrics : NSObject {
    UIColor * _backgroundColor;
    NSArray * _blurViewBackgroundEffects;
    double  _cornerRadius;
    bool  _displaySeparators;
    double  _horizontalPadding;
    double  _interitemPadding;
    bool  _isVerticallyAligned;
    UIColor * _separatorColor;
    double  _verticalPadding;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSArray *blurViewBackgroundEffects;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) bool displaySeparators;
@property (nonatomic, readonly) double horizontalPadding;
@property (nonatomic, readonly) double interitemPadding;
@property (nonatomic) bool isVerticallyAligned;
@property (nonatomic, readonly) UIColor *separatorColor;
@property (nonatomic, readonly) double verticalPadding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)blurViewBackgroundEffects;
- (double)cornerRadius;
- (bool)displaySeparators;
- (double)horizontalPadding;
- (id)init;
- (double)interitemPadding;
- (bool)isVerticallyAligned;
- (id)separatorColor;
- (void)setIsVerticallyAligned:(bool)arg1;
- (double)verticalPadding;

@end
