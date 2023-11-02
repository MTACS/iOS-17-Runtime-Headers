
@interface WKBokehBubble : CALayer <CAAnimationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)init;

@end
