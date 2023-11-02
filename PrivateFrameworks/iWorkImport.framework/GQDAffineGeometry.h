
@interface GQDAffineGeometry : NSObject <GQDNameMappable> {
    float  mAngle;
    bool  mAspectRatioLocked;
    bool  mHorizontalFlip;
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  mPosition;
    float  mShearXAngle;
    float  mShearYAngle;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    bool  mSizesLocked;
    bool  mVerticalFlip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfTransformedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(id)arg2;
+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (void)transformRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(id)arg2 upperLeft:(struct CGPoint { double x1; double x2; }*)arg3 lowerLeft:(struct CGPoint { double x1; double x2; }*)arg4 lowerRight:(struct CGPoint { double x1; double x2; }*)arg5 upperRight:(struct CGPoint { double x1; double x2; }*)arg6;

- (float)angle;
- (bool)aspectRatioLocked;
- (bool)horizontalFlip;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })naturalBounds;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGPoint { double x1; double x2; })nonrotatedPosition;
- (struct CGPoint { double x1; double x2; })position;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)setAngle:(float)arg1;
- (void)setAspectRatioLocked:(bool)arg1;
- (void)setHorizontalFlip:(bool)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShearXAngle:(float)arg1;
- (void)setShearYAngle:(float)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSizesLocked:(bool)arg1;
- (void)setVerticalFlip:(bool)arg1;
- (float)shearXAngle;
- (float)shearYAngle;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeOfBoundingBox;
- (bool)sizesLocked;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformHasVFlip:(bool)arg1 vFlip:(bool)arg2 hasHFlip:(bool)arg3 hFlip:(bool)arg4;
- (bool)verticalFlip;

@end