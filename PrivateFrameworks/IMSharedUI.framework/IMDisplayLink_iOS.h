
@interface IMDisplayLink_iOS : IMDisplayLink {
    CADisplayLink * _displayLink;
}

@property (nonatomic, retain) CADisplayLink *displayLink;

- (void).cxx_destruct;
- (id)displayLink;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (bool)isValid;
- (void)schedule;
- (void)setDisplayLink:(id)arg1;

@end
