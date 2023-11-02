
@interface UIKBShape : NSObject <NSCoding, NSCopying> {
    unsigned long long  m_concaveCorner;
    struct CGSize { 
        double width; 
        double height; 
    }  m_concaveCornerOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_frame;
    UIKBGeometry * m_geometry;
    UIKBShape * m_originalShape;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_paddedFrame;
    bool  m_scaled;
    unsigned long long  m_uid;
}

@property (nonatomic) unsigned long long concaveCorner;
@property (nonatomic) struct CGSize { double x1; double x2; } concaveCornerOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) UIKBGeometry *geometry;
@property (nonatomic, retain) UIKBShape *originalShape;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paddedFrame;
@property (nonatomic) bool scaled;
@property (nonatomic, readonly) unsigned long long uid;

+ (id)shape;
+ (id)shapeByCombining:(id)arg1 withShape:(id)arg2;
+ (id)shapeByResizingShape:(id)arg1 byAmount:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inYAxis:(bool)arg2;
- (void)addRectFrom:(id)arg1;
- (void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2 inRightToLeft:(bool)arg3;
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5;
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 absoluteOriginFactors:(bool)arg6;
- (unsigned long long)concaveCorner;
- (struct CGSize { double x1; double x2; })concaveCornerOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)geometry;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 paddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 paddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 concaveCorner:(unsigned long long)arg4 concaveCornerOffset:(struct CGSize { double x1; double x2; })arg5;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)makeLikeOther:(id)arg1;
- (id)originalShape;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrame;
- (void)scaleIfNeeded:(double)arg1 onlyYAxis:(bool)arg2;
- (void)scaleWidth:(double)arg1;
- (bool)scaled;
- (void)setConcaveCorner:(unsigned long long)arg1;
- (void)setConcaveCornerOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setConcaveCornerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGeometry:(id)arg1;
- (void)setOriginalShape:(id)arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScaled:(bool)arg1;
- (bool)shouldUseGeometry;
- (unsigned long long)uid;

@end
