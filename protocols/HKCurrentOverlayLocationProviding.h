
@protocol HKCurrentOverlayLocationProviding <NSObject>

@required

- (long long)segmentedControlSelectedIndex;
- (HKOverlayContextLocation *)selectedContextLocation;

@end
