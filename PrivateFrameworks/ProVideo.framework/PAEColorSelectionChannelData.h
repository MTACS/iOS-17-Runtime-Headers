
@interface PAEColorSelectionChannelData : NSObject <NSCopying, NSSecureCoding> {
    int  _action;
    double  _frame;
    int  _mode;
    double  _radius;
    double  _radiusScale;
    int  _state;
    int  _style;
    int  _timeScale;
    double  _x;
    double  _y;
}

@property int action;
@property double frame;
@property int mode;
@property double radius;
@property double radiusScale;
@property int state;
@property int style;
@property int timeScale;
@property double x;
@property double y;

+ (bool)supportsSecureCoding;

- (int)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)frame;
- (id)initWithCoder:(id)arg1;
- (int)mode;
- (double)radius;
- (double)radiusScale;
- (void)setAction:(int)arg1;
- (void)setFrame:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setRadius:(double)arg1;
- (void)setRadiusScale:(double)arg1;
- (void)setState:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setTimeScale:(int)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (int)state;
- (int)style;
- (int)timeScale;
- (double)x;
- (double)y;

@end
