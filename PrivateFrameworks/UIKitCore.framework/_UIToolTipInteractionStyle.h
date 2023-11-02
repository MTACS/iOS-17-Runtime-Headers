
@interface _UIToolTipInteractionStyle : NSObject <_UIVisualStyleProviding> {
    <UIToolTipProvider> * _provider;
    UIView * _view;
}

@property (nonatomic, readonly) <UIToolTipProvider> *provider;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)initWithView:(id)arg1 provider:(id)arg2;
- (id)provider;
- (void)providerDidUpdate;
- (id)view;

@end
