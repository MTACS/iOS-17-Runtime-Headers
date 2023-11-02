
@interface PXExtendedTraitCollectionSnapshot : NSObject {
    long long  _contentSizeCategory;
    double  _displayScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fullScreenReferenceRect;
    long long  _layoutDirection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    long long  _layoutOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutReferenceSize;
    long long  _layoutSizeClass;
    long long  _layoutSizeSubclass;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _peripheryInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    long long  _userInterfaceFeature;
    long long  _userInterfaceIdiom;
    long long  _userInterfaceLevel;
    long long  _userInterfaceStyle;
    long long  _windowOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowReferenceSize;
}

@property (nonatomic, readonly) long long contentSizeCategory;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fullScreenReferenceRect;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } layoutReferenceSize;
@property (nonatomic, readonly) long long layoutSizeClass;
@property (nonatomic, readonly) long long layoutSizeSubclass;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) long long userInterfaceFeature;
@property (nonatomic, readonly) long long userInterfaceIdiom;
@property (nonatomic, readonly) long long userInterfaceLevel;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long windowOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowReferenceSize;

- (id)_initWithExtendedTraitCollection:(id)arg1;
- (long long)contentSizeCategory;
- (double)displayScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenReferenceRect;
- (long long)layoutDirection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (long long)layoutOrientation;
- (struct CGSize { double x1; double x2; })layoutReferenceSize;
- (long long)layoutSizeClass;
- (long long)layoutSizeSubclass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (long long)userInterfaceFeature;
- (long long)userInterfaceIdiom;
- (long long)userInterfaceLevel;
- (long long)userInterfaceStyle;
- (long long)windowOrientation;
- (struct CGSize { double x1; double x2; })windowReferenceSize;

@end
