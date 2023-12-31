
@protocol SiriUITemplateView <NSObject>

@required

- (double)desiredHeight;
- (void)removeFromTemplatedSuperview;
- (void)setTemplatedSuperview:(id <SiriUITemplatedView>)arg1;
- (<SiriUITemplatedView> *)templatedSuperview;

@end
