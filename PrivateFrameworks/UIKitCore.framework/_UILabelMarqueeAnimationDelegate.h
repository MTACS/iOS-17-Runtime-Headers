
@interface _UILabelMarqueeAnimationDelegate : NSObject <CAAnimationDelegate> {
    UILabel * _label;
    bool  _started;
    bool  _suppressEnded;
    bool  _updated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UILabel *label;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressEnded;

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithLabel:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setSuppressEnded:(bool)arg1;
- (bool)suppressEnded;

@end
