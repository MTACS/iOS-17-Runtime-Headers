
@interface CKOrganicImageLayoutRecipe : NSObject {
    NSString * _groupIdentifier;
    NSNumber * _groupMaxX;
    bool  _isLastItem;
    double  _offset;
    double  _overlap;
    NSNumber * _relativeGroupCenter;
    double  _rotation;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    bool  _wantsShadow;
}

@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, retain) NSNumber *groupMaxX;
@property (nonatomic) bool isLastItem;
@property (nonatomic) double offset;
@property (nonatomic) double overlap;
@property (nonatomic, retain) NSNumber *relativeGroupCenter;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) bool wantsShadow;

- (void).cxx_destruct;
- (id)description;
- (id)groupIdentifier;
- (id)groupMaxX;
- (id)initWithRotation:(double)arg1 offset:(double)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 overlap:(double)arg4 wantsShadow:(bool)arg5 groupIdentifier:(id)arg6;
- (bool)isLastItem;
- (double)offset;
- (double)overlap;
- (id)relativeGroupCenter;
- (double)rotation;
- (void)setGroupIdentifier:(id)arg1;
- (void)setGroupMaxX:(id)arg1;
- (void)setIsLastItem:(bool)arg1;
- (void)setOffset:(double)arg1;
- (void)setOverlap:(double)arg1;
- (void)setRelativeGroupCenter:(id)arg1;
- (void)setRotation:(double)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWantsShadow:(bool)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (bool)wantsShadow;

@end
