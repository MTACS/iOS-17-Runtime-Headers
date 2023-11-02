
@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {
    bool  _animates;
    NSString * _destinationViewControllerIdentifier;
    NSString * _identifier;
    bool  _performOnViewLoad;
    SEL  _prepareForChildViewControllerSelector;
    NSString * _segueClassName;
    UIViewController * _viewController;
}

@property (nonatomic) bool animates;
@property (nonatomic, retain) NSString *customPrepareForChildViewControllerSelectorName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool performOnViewLoad;
@property (nonatomic, readonly) SEL prepareForChildViewControllerSelector;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)_perform:(id)arg1;
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;
- (bool)animates;
- (id)customPrepareForChildViewControllerSelectorName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)arg1;
- (id)perform:(id)arg1;
- (bool)performOnViewLoad;
- (SEL)prepareForChildViewControllerSelector;
- (id)segueWithDestinationViewController:(id)arg1;
- (void)setAnimates:(bool)arg1;
- (void)setCustomPrepareForChildViewControllerSelectorName:(id)arg1;
- (void)setPerformOnViewLoad:(bool)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
