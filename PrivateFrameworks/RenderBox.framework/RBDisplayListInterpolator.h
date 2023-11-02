
@interface RBDisplayListInterpolator : NSObject <NSCopying> {
    struct objc_ptr<id<_RBDisplayListContents>> { 
        <_RBDisplayListContents> *_p; 
    }  _from;
    struct refcounted_ptr<const RB::Interpolator::Object> { 
        struct Object {} *_p; 
    }  _interp;
    struct objc_ptr<NSDictionary *> { 
        NSDictionary *_p; 
    }  _options;
    struct objc_ptr<id<_RBDisplayListContents>> { 
        <_RBDisplayListContents> *_p; 
    }  _to;
}

@property (nonatomic, readonly) double activeDuration;
@property (nonatomic, retain) <RBDisplayListContents> *from;
@property (getter=isIdentity, nonatomic, readonly) bool identity;
@property (nonatomic, readonly) bool onlyFades;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly) <RBDisplayListContents> *to;

+ (id)interpolatorWithFrom:(id)arg1 to:(id)arg2 options:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)activeDuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithProgress:(float)arg1;
- (id)contentsWithProgress:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawInState:(struct _RBDrawingState { }*)arg1 by:(float)arg2;
- (id)from;
- (id)initWithFrom:(id)arg1 to:(id)arg2 options:(id)arg3;
- (bool)isIdentity;
- (double)maxAbsoluteVelocityWithProgress:(float)arg1;
- (bool)onlyFades;
- (id)options;
- (void)setFrom:(id)arg1;
- (id)to;

@end
