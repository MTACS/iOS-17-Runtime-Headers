
@interface JFXTextEffectFrame : NSObject {
    struct PVCGPointQuad { 
        struct CGPoint { 
            double x; 
            double y; 
        } a; 
        struct CGPoint { 
            double x; 
            double y; 
        } b; 
        struct CGPoint { 
            double x; 
            double y; 
        } c; 
        struct CGPoint { 
            double x; 
            double y; 
        } d; 
    }  _cornerPoints;
    int  _effectOrigin;
    struct CGSize { 
        double width; 
        double height; 
    }  _effectSize;
    struct CGPath { } * _expandedHitAreaPath;
    bool  _forcePosterFrame;
    struct CGPath { } * _hitAreaPath;
    NSArray * _hitAreaPoints;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _objectBounds;
    int  _origin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outputROI;
    struct CGSize { 
        double width; 
        double height; 
    }  _relativeToSize;
    NSArray * _textFrames;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
    struct PVTransformInfo { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*translation; 
    }  _transformInfo;
    JFXTextEffectTransforms * _transforms;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; } cornerPoints;
@property (nonatomic) int effectOrigin;
@property (nonatomic) struct CGSize { double x1; double x2; } effectSize;
@property (nonatomic) struct CGPath { }*expandedHitAreaPath;
@property (nonatomic) bool forcePosterFrame;
@property (nonatomic) struct CGPath { }*hitAreaPath;
@property (nonatomic, retain) NSArray *hitAreaPoints;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } objectBounds;
@property (nonatomic) int origin;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outputROI;
@property (nonatomic) struct CGSize { double x1; double x2; } relativeToSize;
@property (nonatomic, retain) NSArray *textFrames;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic) struct PVTransformInfo { struct { } x1; } transformInfo;
@property (nonatomic, retain) JFXTextEffectTransforms *transforms;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewSpaceObjectBounds;

+ (id)frameWithEffect:(id)arg1 relativeToSize:(struct CGSize { double x1; double x2; })arg2 origin:(int)arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forcePosterFrame:(bool)arg5 includeDropShadow:(bool)arg6 includeTextFrames:(bool)arg7;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })cornerPoints;
- (void)dealloc;
- (id)description;
- (int)effectOrigin;
- (struct CGSize { double x1; double x2; })effectSize;
- (struct CGPath { }*)expandedHitAreaPath;
- (bool)forcePosterFrame;
- (struct CGPath { }*)hitAreaPath;
- (id)hitAreaPoints;
- (id)initWithEffect:(id)arg1 relativeToSize:(struct CGSize { double x1; double x2; })arg2 origin:(int)arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forcePosterFrame:(bool)arg5 includeDropShadow:(bool)arg6 includeTextFrames:(bool)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })objectBounds;
- (int)origin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputROI;
- (struct CGSize { double x1; double x2; })relativeToSize;
- (void)setCornerPoints:(struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg1;
- (void)setEffectOrigin:(int)arg1;
- (void)setEffectSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExpandedHitAreaPath:(struct CGPath { }*)arg1;
- (void)setForcePosterFrame:(bool)arg1;
- (void)setHitAreaPath:(struct CGPath { }*)arg1;
- (void)setHitAreaPoints:(id)arg1;
- (void)setObjectBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrigin:(int)arg1;
- (void)setOutputROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRelativeToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextFrames:(id)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTransformInfo:(struct PVTransformInfo { struct { } x1; })arg1;
- (void)setTransforms:(id)arg1;
- (id)textFrames;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (struct PVTransformInfo { struct { } x1; })transformInfo;
- (id)transforms;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewSpaceObjectBounds;

@end
