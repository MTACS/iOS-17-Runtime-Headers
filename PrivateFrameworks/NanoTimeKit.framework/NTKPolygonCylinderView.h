
@interface NTKPolygonCylinderView : UIView <NTKEditOptionContainerView> {
    double  _rotationAngle;
    _NTKPolygonCylinderTransformView * _transformView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfSides;
@property (nonatomic, readonly) unsigned long long numberOfVisibleSides;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_informFaceViewsOfRotation;
- (double)_rotationAngleForFaceIndex:(long long)arg1;
- (void)_setRotationAngle:(double)arg1;
- (void)_updateTransform;
- (void)enumerateSideViewsWithBlock:(id /* block */)arg1;
- (id)init;
- (void)layoutSubviews;
- (unsigned long long)numberOfSides;
- (unsigned long long)numberOfVisibleSides;
- (void)setNumberOfSides:(unsigned long long)arg1;
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (id)viewForSideAtIndex:(unsigned long long)arg1;

@end
