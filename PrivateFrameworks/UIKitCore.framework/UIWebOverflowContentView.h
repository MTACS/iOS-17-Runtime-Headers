
@interface UIWebOverflowContentView : UIView {
    CALayer * _webLayer;
}

@property (nonatomic, retain) CALayer *webLayer;

- (void)_setCachedSubviews:(id)arg1;
- (void)dealloc;
- (void)fixUpViewAfterInsertion;
- (id)initWithLayer:(id)arg1;
- (void)replaceLayer:(id)arg1;
- (void)setWebLayer:(id)arg1;
- (id)superview;
- (id)webLayer;
- (void)willBeRemoved;

@end
