
@interface SBScrunchGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {
    double  _absoluteScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCentroid;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationWithoutScale;
}

@property (nonatomic) double absoluteScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } centroid;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialCentroid;
@property (nonatomic) struct CGPoint { double x1; double x2; } translationWithoutScale;

- (double)absoluteScale;
- (struct CGPoint { double x1; double x2; })centroid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })initialCentroid;
- (void)setAbsoluteScale:(double)arg1;
- (void)setCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTranslationWithoutScale:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })translationWithoutScale;
- (long long)type;

@end
