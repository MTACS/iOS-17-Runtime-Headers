
@protocol ASVTouch <NSObject>

@required

- (id)location;
- (long long)phase;
- (id)previousLocation;
- (double)timestamp;

@end
