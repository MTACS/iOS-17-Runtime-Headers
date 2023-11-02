
@interface PXGadgetSpec : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _accessoryViewInset;
    UIColor * _backgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _displayScale;
    PXExtendedTraitCollection * _extendedTraitCollection;
    double  _fixedColumnWidth;
    double  _interItemSpacing;
    long long  _layoutDirection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutInsets;
    long long  _layoutOrientation;
    double  _layoutReferenceHeight;
    double  _layoutReferenceWidth;
    long long  _layoutSizeClass;
    long long  _scrollAxis;
    bool  _shouldInsetAllContent;
    bool  _shouldUseAccessibilityLayout;
    long long  _userInterfaceIdiom;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } accessoryViewInset;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) double fixedColumnWidth;
@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutInsets;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, readonly) double layoutReferenceHeight;
@property (nonatomic, readonly) double layoutReferenceWidth;
@property (nonatomic, readonly) long long layoutSizeClass;
@property (nonatomic, readonly) PXExtendedTraitCollection *rootExtendedTraitCollection;
@property (nonatomic, readonly) long long scrollAxis;
@property (nonatomic, readonly) bool shouldInsetAllContent;
@property (nonatomic, readonly) bool shouldUseAccessibilityLayout;
@property (nonatomic, readonly) long long userInterfaceIdiom;

+ (id)horizontalContentInsetsInterpolator;
+ (double)sectionHeaderHeightForStyle:(unsigned long long)arg1 dividerHidden:(bool)arg2;
+ (double)sectionHeaderTitleBottomSpacingForStyle:(unsigned long long)arg1;
+ (double)sectionHeaderTitleHeightForStyle:(unsigned long long)arg1 dividerHidden:(bool)arg2;
+ (double)sectionHeaderTopSpacingForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })acccessoryViewInsetForTraitCollection:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })accessoryViewInset;
- (id)backgroundColor;
- (double)columnSpacingForColumnSpan:(long long)arg1;
- (double)columnWidthForColumnSpan:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)displayScale;
- (id)extendedTraitCollection;
- (double)fixedColumnWidth;
- (id)initWithTraitCollection:(id)arg1 scrollAxis:(long long)arg2;
- (double)interItemSpacing;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGadgetSpec:(id)arg1;
- (long long)layoutDirection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsets;
- (long long)layoutOrientation;
- (double)layoutReferenceHeight;
- (double)layoutReferenceWidth;
- (long long)layoutSizeClass;
- (id)rootExtendedTraitCollection;
- (long long)scrollAxis;
- (bool)shouldInsetAllContent;
- (bool)shouldInsetContentForTraitCollection:(id)arg1;
- (bool)shouldUseAccessibilityLayout;
- (long long)userInterfaceIdiom;

@end
