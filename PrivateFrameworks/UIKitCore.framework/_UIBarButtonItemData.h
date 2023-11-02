
@interface _UIBarButtonItemData : _UIBarAppearanceData <_UIBarButtonItemDataFallback> {
    UIImage * _backIndicatorImage;
    UIImageSymbolConfiguration * _backIndicatorSymbolConfiguration;
    UIImage * _backIndicatorTransitionMaskImage;
    UIImage * _backgroundImage;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _backgroundImagePositionAdjustment;
    UIImageSymbolConfiguration * _compactBackIndicatorSymbolConfiguration;
    UIImageSymbolConfiguration * _compactImageSymbolConfiguration;
    struct { 
        unsigned int isBackButtonData : 1; 
    }  _dataFlags;
    <_UIBarButtonItemDataFallback> * _fallback;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    struct { 
        unsigned int hasUserFont : 1; 
        unsigned int hasUserColor : 1; 
        unsigned int hasUserTitlePosition : 1; 
        unsigned int hasUserBackgroundImage : 1; 
        unsigned int hasUserBackgroundImagePosition : 1; 
    }  _stateFlags;
    long long  _style;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _titlePositionAdjustment;
    NSDictionary * _titleTextAttributes;
}

@property (nonatomic, readonly) UIImage *backIndicatorImage;
@property (nonatomic, readonly) UIImageSymbolConfiguration *backIndicatorSymbolConfiguration;
@property (nonatomic, readonly) UIImage *backIndicatorTransitionMaskImage;
@property (nonatomic, readonly) UIImageSymbolConfiguration *backIndicatorTransitionMaskSymbolConfiguration;
@property (nonatomic, readonly) UIImage *compactBackIndicatorImage;
@property (nonatomic, readonly) UIImageSymbolConfiguration *compactBackIndicatorSymbolConfiguration;
@property (nonatomic, readonly) UIImage *compactBackIndicatorTransitionMaskImage;
@property (nonatomic, readonly) UIImageSymbolConfiguration *compactBackIndicatorTransitionMaskSymbolConfiguration;
@property (nonatomic, readonly) UIImageSymbolConfiguration *compactImageSymbolConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <_UIBarButtonItemDataFallback> *fallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, readonly) bool isBackButtonData;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardBackButtonData;
+ (id)standardItemDataForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_decodeBackgroundImagesFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;
- (id)_fallbackColorForState:(long long)arg1;
- (id)_fallbackFontForState:(long long)arg1;
- (id)backIndicatorImage;
- (id)backIndicatorSymbolConfiguration;
- (id)backIndicatorTextStyleForSymbolConfiguration;
- (id)backIndicatorTransitionMaskImage;
- (id)backIndicatorTransitionMaskSymbolConfiguration;
- (id)backgroundImageForState:(long long)arg1;
- (id)backgroundImageForState:(long long)arg1 style:(long long)arg2;
- (struct UIOffset { double x1; double x2; })backgroundImagePositionAdjustmentForState:(long long)arg1;
- (struct UIOffset { double x1; double x2; })backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;
- (bool)checkEqualTo:(id)arg1;
- (id)colorForState:(long long)arg1 style:(long long)arg2;
- (id)compactBackIndicatorImage;
- (id)compactBackIndicatorSymbolConfiguration;
- (id)compactBackIndicatorTransitionMaskImage;
- (id)compactBackIndicatorTransitionMaskSymbolConfiguration;
- (id)compactImageSymbolConfiguration;
- (id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)arg1;
- (id)dataWithNewFallback:(id)arg1;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (id)fallback;
- (id)fontForState:(long long)arg1 style:(long long)arg2;
- (long long)hashInto:(long long)arg1;
- (id)imageSymbolConfiguration;
- (id)initWithStyle:(long long)arg1;
- (bool)isBackButtonData;
- (id)replicate;
- (void)resetBackIndicatorImages;
- (void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(long long)arg2;
- (void)setBackgroundImagePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forState:(long long)arg2;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forState:(long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;
- (long long)style;
- (id)textStyleForSymbolConfiguration;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForState:(long long)arg1;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;
- (id)titleTextAttributesForState:(long long)arg1;

@end
