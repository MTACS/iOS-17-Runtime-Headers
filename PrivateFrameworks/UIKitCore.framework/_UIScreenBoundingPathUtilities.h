
@interface _UIScreenBoundingPathUtilities : NSObject {
    UIScreen * _screen;
}

@property (getter=_screen, nonatomic) UIScreen *screen;

+ (id)boundingPathUtilitiesForScreen:(id)arg1;

- (void).cxx_destruct;
- (id)_screen;
- (id)boundingPathForWindow:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)setScreen:(id)arg1;

@end
