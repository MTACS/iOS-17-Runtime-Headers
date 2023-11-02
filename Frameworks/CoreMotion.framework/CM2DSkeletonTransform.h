
@interface CM2DSkeletonTransform : NSObject {
    float  _confidence;
    void _position;
    int  _type;
    bool  _visible;
}

@property (nonatomic) float confidence;
@property (nonatomic) void position;
@property (nonatomic) int type;
@property (nonatomic) bool visible;

- (float)confidence;
- (void)position;
- (void)setConfidence:(float)arg1;
- (void)setPosition;
- (void)setType:(int)arg1;
- (void)setVisible:(bool)arg1;
- (int)type;
- (bool)visible;

@end
