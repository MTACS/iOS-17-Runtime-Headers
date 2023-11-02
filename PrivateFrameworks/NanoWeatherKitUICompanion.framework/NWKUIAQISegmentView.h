
@interface NWKUIAQISegmentView : UIView {
    bool  _active;
    CALayer * _bodyLayer;
    CALayer * _capLayer;
    UIColor * _color;
    double  _lastLayoutHeight;
    unsigned long long  _mode;
}

@property (getter=isActive, readonly) bool active;
@property (readonly) UIColor *color;
@property (readonly) unsigned long long mode;

- (void).cxx_destruct;
- (id)color;
- (id)initWithColor:(id)arg1 active:(bool)arg2 mode:(unsigned long long)arg3;
- (bool)isActive;
- (void)layoutSubviews;
- (unsigned long long)mode;

@end
