
@protocol FMFNoLocationViewDelegate <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (NSSet *)handlesShowingLocations;

@end
