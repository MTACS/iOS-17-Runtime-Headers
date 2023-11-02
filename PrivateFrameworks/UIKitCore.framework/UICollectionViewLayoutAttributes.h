
@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem> {
    double  _alpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    double  _cornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _defaultLayoutMargins;
    NSString * _elementKind;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    bool  _hasMaskViewFrame;
    NSIndexPath * _indexPath;
    struct { 
        unsigned int isCellKind : 1; 
        unsigned int isDecorationView : 1; 
        unsigned int isHidden : 1; 
        unsigned int isClone : 1; 
        unsigned int masksToBounds : 1; 
        unsigned int maskedCorners : 4; 
        unsigned int hasDefaultLayoutMargins : 1; 
        unsigned int removeMaskViewAfterAnimation : 1; 
        unsigned int pinnedToVisibleBounds : 1; 
        unsigned int hasCustomAttributes : 1; 
    }  _layoutFlags;
    _UICollectionLayoutListAttributes * _listAttributes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _maskViewFrame;
    id  _preferredSizingData;
    NSString * _reuseIdentifier;
    unsigned long long  _selectionGrouping;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _transform;
    long long  _zIndex;
    long long  _zPosition;
}

@property (nonatomic) double alpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, readonly) unsigned long long representedElementCategory;
@property (nonatomic, readonly) NSString *representedElementKind;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform3D;
@property (nonatomic) long long zIndex;

+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;
+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;

- (void).cxx_destruct;
- (void)_setZPosition:(long long)arg1;
- (long long)_zPosition;
- (double)alpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (id)indexPath;
- (id)init;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isSizeEqualForPreferredFittingAttributes:(id)arg1;
- (unsigned long long)representedElementCategory;
- (id)representedElementKind;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setZIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform3D;
- (long long)zIndex;

@end
