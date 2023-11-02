
@interface ABPKDirectScalingParams : NSObject {
    float  _heightScale;
    float  _widthScale;
}

@property (nonatomic, readonly) float heightScale;
@property (nonatomic, readonly) float widthScale;

- (float)heightScale;
- (id)initWithInputResolution:(struct CGSize { double x1; double x2; })arg1 andOutputResolution:(struct CGSize { double x1; double x2; })arg2;
- (float)widthScale;

@end
