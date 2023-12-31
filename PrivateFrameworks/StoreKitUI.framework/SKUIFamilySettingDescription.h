
@interface SKUIFamilySettingDescription : SKUISettingDescription {
    long long  _viewState;
    SKUISettingsFamilyViewStateCoordinator * _viewStateCoordinator;
}

@property (nonatomic, readonly) long long viewState;

+ (Class)_viewClassForSettingDescription:(id)arg1;

- (void).cxx_destruct;
- (bool)_initiallyHidden;
- (void)_updateViewState;
- (void)_updateWithViewState:(long long)arg1;
- (void)handleSelectionOnCompletion:(id /* block */)arg1;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (long long)viewState;

@end
