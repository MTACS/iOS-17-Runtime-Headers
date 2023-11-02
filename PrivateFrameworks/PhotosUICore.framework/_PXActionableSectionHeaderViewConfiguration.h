
@interface _PXActionableSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration> {
    NSString * _actionText;
    long long  _actionType;
    bool  _avoidsTintedButtonsAtHighSpeeds;
    NSString * _backdropViewGroupName;
    unsigned long long  _backgroundStyle;
    PXCuratedLibrarySectionHeaderLayoutSpec * _buttonSpec;
    unsigned long long  _buttonStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    double  _gradientAlpha;
    UIImage * _gradientImage;
    double  _gradientOverhang;
    NSString * _primaryText;
    NSString * _secondaryText;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _sectionIndexPath;
    bool  _showsTopSeparator;
    bool  _supportsMultipleLinesInCompactLayout;
    PXActionableSectionHeaderLayout * _weakLayout;
}

@property (nonatomic, copy) NSString *actionText;
@property (nonatomic) long long actionType;
@property (nonatomic) bool avoidsTintedButtonsAtHighSpeeds;
@property (nonatomic, copy) NSString *backdropViewGroupName;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, retain) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec;
@property (nonatomic) unsigned long long buttonStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) double gradientAlpha;
@property (nonatomic, retain) UIImage *gradientImage;
@property (nonatomic) double gradientOverhang;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } sectionIndexPath;
@property (nonatomic) bool showsTopSeparator;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsMultipleLinesInCompactLayout;
@property (nonatomic) PXActionableSectionHeaderLayout *weakLayout;

- (void).cxx_destruct;
- (id)actionText;
- (long long)actionType;
- (bool)avoidsTintedButtonsAtHighSpeeds;
- (id)backdropViewGroupName;
- (unsigned long long)backgroundStyle;
- (id)buttonSpec;
- (unsigned long long)buttonStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (double)gradientAlpha;
- (id)gradientImage;
- (double)gradientOverhang;
- (id)primaryText;
- (id)secondaryText;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })sectionIndexPath;
- (void)setActionText:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setAvoidsTintedButtonsAtHighSpeeds:(bool)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setButtonSpec:(id)arg1;
- (void)setButtonStyle:(unsigned long long)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGradientAlpha:(double)arg1;
- (void)setGradientImage:(id)arg1;
- (void)setGradientOverhang:(double)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setShowsTopSeparator:(bool)arg1;
- (void)setSupportsMultipleLinesInCompactLayout:(bool)arg1;
- (void)setWeakLayout:(id)arg1;
- (bool)showsTopSeparator;
- (bool)supportsMultipleLinesInCompactLayout;
- (id)weakLayout;

@end
