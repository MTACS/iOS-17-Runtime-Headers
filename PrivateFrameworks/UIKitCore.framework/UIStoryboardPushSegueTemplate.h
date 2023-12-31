
@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate {
    long long  _destinationContainmentContext;
    long long  _splitViewControllerIndex;
}

@property (nonatomic) long long destinationContainmentContext;
@property (nonatomic) long long splitViewControllerIndex;

- (long long)destinationContainmentContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (void)setDestinationContainmentContext:(long long)arg1;
- (void)setSplitViewControllerIndex:(long long)arg1;
- (long long)splitViewControllerIndex;

@end
