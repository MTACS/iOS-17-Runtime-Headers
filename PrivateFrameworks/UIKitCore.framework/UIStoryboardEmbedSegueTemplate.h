
@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate {
    UIView * _containerView;
}

@property (nonatomic, retain) UIView *containerView;

- (void).cxx_destruct;
- (id)containerView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (void)setContainerView:(id)arg1;

@end
