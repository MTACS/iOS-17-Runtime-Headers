
@protocol DSController <NSObject>

@required

- (<DSNavigationDelegate> *)delegate;
- (id)init;
- (void)setDelegate:(id <DSNavigationDelegate>)arg1;

@optional

- (bool)shouldShow;
- (void)shouldShowWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
