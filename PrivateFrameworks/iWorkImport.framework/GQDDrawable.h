
@interface GQDDrawable : NSObject <GQWrapPointGenerator> {
    GQDAffineGeometry * mGeometry;
    bool  mHasPagesOrder;
    void * mInnerWrapPoints;
    long long  mPagesOrder;
    char * mUid;
    struct __CFURL { } * mUrl;
    GQDAffineGeometry * mWrapGeometry;
    GQDBezierPath * mWrapPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addWrapPoint:(id)arg1;
- (void)clearWrapPoints;
- (void)collectWrapPoints:(id)arg1 forPath:(struct CGPath { }*)arg2 context:(struct FindLinesContext { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct __CFArray {} *x4; bool x5; int x6; }*)arg3;
- (int)collectWrapPointsForState:(id)arg1 graphicStyle:(id)arg2;
- (struct CGPath { }*)createBezierPath;
- (void*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (void)dealloc;
- (id)geometry;
- (bool)hasPagesOrder;
- (int)pagesOrder;
- (void)setPagesOrder:(int)arg1;
- (const char *)uid;
- (struct __CFURL { }*)url;
- (struct __CFString { }*)urlString;
- (const void*)wrapPoints;

@end
