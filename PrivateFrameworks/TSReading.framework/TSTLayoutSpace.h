
@interface TSTLayoutSpace : NSObject {
    TSTCoordinateArray * mBodyColumnCoordinates;
    TSTCoordinateArray * mBodyRowCoordinates;
    TSTLayoutSpaceBundle * mBundle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedAlignedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedAlignedStrokeFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedStrokeFrame;
    bool  mDrawBlackAndWhite;
    bool  mDrawPreventAntialias;
    struct { 
        struct { 
            unsigned int column; 
            unsigned int row; 
        } topLeft; 
        struct { 
            unsigned int column; 
            unsigned int row; 
        } bottomRight; 
    }  mGridRange;
    TSTCoordinateArray * mHeaderColumnRowCoordinates;
    bool  mHeaderColumnsRepeat;
    TSTCoordinateArray * mHeaderRowColumnCoordinates;
    bool  mHeaderRowsRepeat;
    struct { 
        bool coordinates; 
        bool tableOffset; 
    }  mInvalidFlags;
    bool  mLayoutDirectionIsLeftToRight;
    int  mLayoutSpaceType;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  mLock;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTableOffset;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformFromCanvas;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformFromDevice;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformToCanvas;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformToDevice;
    double  mViewScale;
}

@property (nonatomic, readonly) TSTLayoutSpaceBundle *bundle;
@property (nonatomic) bool drawBlackAndWhite;
@property (nonatomic) bool drawPreventAntialias;
@property (nonatomic) bool headerColumnsRepeat;
@property (nonatomic) bool headerRowsRepeat;
@property (nonatomic, readonly) bool isColumns;
@property (nonatomic, readonly) bool isCorner;
@property (nonatomic, readonly) bool isFrozen;
@property (nonatomic, readonly) bool isMain;
@property (nonatomic, readonly) bool isRepeat;
@property (nonatomic, readonly) bool isRows;
@property (nonatomic, readonly) TSTLayout *layout;
@property (nonatomic, readonly) bool layoutDirectionIsLeftToRight;
@property (nonatomic, readonly) int layoutSpaceType;
@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic) struct CGPoint { double x1; double x2; } tableOffset;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformFromCanvas;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformFromDevice;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformToCanvas;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformToDevice;
@property (nonatomic) double viewScale;

- (id)bundle;
- (void)dealloc;
- (id)description;
- (bool)drawBlackAndWhite;
- (bool)drawPreventAntialias;
- (bool)headerColumnsRepeat;
- (bool)headerRowsRepeat;
- (id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2;
- (void)invalidateCoordinates;
- (void)invalidateTableOffset;
- (bool)isColumns;
- (bool)isCorner;
- (bool)isFrozen;
- (bool)isMain;
- (bool)isRepeat;
- (bool)isRows;
- (id)layout;
- (bool)layoutDirectionIsLeftToRight;
- (int)layoutSpaceType;
- (void)lockForRead;
- (void)lockForWrite;
- (id)masterLayout;
- (bool)p_getLayoutDirectionLeftToRight;
- (void)setDrawBlackAndWhite:(bool)arg1;
- (void)setDrawPreventAntialias:(bool)arg1;
- (void)setHeaderColumnsRepeat:(bool)arg1;
- (void)setHeaderRowsRepeat:(bool)arg1;
- (void)setTableOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransformFromCanvas:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformFromDevice:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformToCanvas:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformToDevice:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewScale:(double)arg1;
- (struct CGPoint { double x1; double x2; })tableOffset;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromCanvas;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromDevice;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToCanvas;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToDevice;
- (void)unlock;
- (int)validate:(id)arg1;
- (void)validateCachedFrames;
- (int)validateCoordinateCache:(id)arg1;
- (int)validateTableOffset:(id)arg1;
- (double)viewScale;

@end
