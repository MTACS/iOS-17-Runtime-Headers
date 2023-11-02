
@protocol AAUIInviteConfigurationController <NSObject>

@required

- (<AAUIInviteControllerDelegate> *)delegate;
- (void)presentWhenReadyWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <AAUIInviteControllerDelegate>)arg1;

@end
