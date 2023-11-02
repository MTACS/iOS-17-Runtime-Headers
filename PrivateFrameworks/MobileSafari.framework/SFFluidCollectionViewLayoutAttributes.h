
@interface SFFluidCollectionViewLayoutAttributes : NSObject <NSCopying> {
    double  _alpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    NSMutableDictionary * _customProperties;
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
    SFFluidCollectionElementIdentifier * _representedElementIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    double  _zPosition;
}

@property (nonatomic) double alpha;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, readonly) long long representedElementCategory;
@property (getter=_representedElementIdentifier, nonatomic, readonly) SFFluidCollectionElementIdentifier *representedElementIdentifier;
@property (nonatomic, readonly) NSString *representedElementKind;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) double zPosition;

- (void).cxx_destruct;
- (void)_enumerateCustomPropertiesWithBlock:(id /* block */)arg1;
- (void)_enumerateCustomPropertiesWithDoubleBlock:(id /* block */)arg1 floatBlock:(id /* block */)arg2 pointBlock:(id /* block */)arg3 sizeBlock:(id /* block */)arg4 rectBlock:(id /* block */)arg5;
- (id)_representedElementIdentifier;
- (double)alpha;
- (struct CGPoint { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)hasAnimatableChangesFromAttributes:(id)arg1;
- (unsigned long long)hash;
- (id)indexPath;
- (id)init;
- (id)initForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1;
- (id)initWithIndexPath:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)representedElementCategory;
- (id)representedElementKind;
- (void)setAlpha:(double)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndexPath:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setValue:(id)arg1 forCustomProperty:(id)arg2;
- (void)setZPosition:(double)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)valueForCustomProperty:(id)arg1;
- (double)zPosition;

@end
