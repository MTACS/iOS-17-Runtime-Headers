
@interface NWKUIAQISegmentModel : NSObject {
    bool  _active;
    UIColor * _color;
}

@property (getter=isActive, readonly) bool active;
@property (readonly) UIColor *color;

- (void).cxx_destruct;
- (id)color;
- (id)initWithColor:(id)arg1 active:(bool)arg2;
- (bool)isActive;

@end
