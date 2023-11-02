
@interface CSPresentation : NSObject <CSPresentationProviding, NSCopying, UICoordinateSpace> {
    <UICoordinateSpace> * _coordinateSpace;
    NSString * _identifier;
    NSMutableArray * _regions;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) <UICoordinateSpace> *presentationCoordinateSpace;
@property (nonatomic, readonly, copy) NSArray *presentationRegions;
@property (nonatomic, readonly, copy) NSArray *regions;
@property (readonly) Class superclass;

+ (id)presentation;
+ (id)presentationForProvider:(id)arg1;
+ (id)presentationWithCoordinateSpace:(id)arg1;

- (void).cxx_destruct;
- (void)addRegion:(id)arg1;
- (void)addRegions:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)firstRegionIntersectingCoordinateSpace:(id)arg1;
- (id)firstRegionIntersectingCoordinateSpace:(id)arg1 excludingRegionsWithRole:(long long)arg2;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)intersectsCoordinateSpace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)presentationCoordinateSpace;
- (id)presentationForRole:(long long)arg1;
- (id)presentationRegions;
- (id)regions;
- (id)regionsIntersectingCoordinateSpace:(id)arg1;
- (void)reset;
- (void)setCoordinateSpace:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })suggestedInsetsForPreferredContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)unionPresentation:(id)arg1;

@end
