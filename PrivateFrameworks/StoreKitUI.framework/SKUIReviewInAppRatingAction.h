
@interface SKUIReviewInAppRatingAction : UIInterfaceAction {
    id /* block */  _afterDismissHandler;
    id /* block */  _beforeDismissHandler;
}

@property (nonatomic, copy) id /* block */ afterDismissHandler;
@property (nonatomic, copy) id /* block */ beforeDismissHandler;

+ (id)actionWithCustomContentViewController:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)afterDismissHandler;
- (id /* block */)beforeDismissHandler;
- (void)setAfterDismissHandler:(id /* block */)arg1;
- (void)setBeforeDismissHandler:(id /* block */)arg1;
- (void)setCustomEnabledState:(bool)arg1;
- (void)setEnabled:(bool)arg1;

@end
