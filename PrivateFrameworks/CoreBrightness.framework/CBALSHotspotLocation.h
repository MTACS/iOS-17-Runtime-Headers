
@interface CBALSHotspotLocation : NSObject {
    float  _x;
    float  _y;
}

@property (nonatomic) float x;
@property (nonatomic) float y;

- (id)description;
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (float)x;
- (float)y;

@end
