
@interface SUUIAccountButtonsComponent : SUUIPageComponent {
    SUUILink * _ecommerceLink;
    bool  _hidesTermsAndConditions;
}

@property (nonatomic, retain) SUUILink *ECommerceLink;
@property (nonatomic) bool hidesTermsAndConditions;
@property (nonatomic, readonly) SUUIAccountButtonsViewElement *viewElement;

- (void).cxx_destruct;
- (id)ECommerceLink;
- (long long)componentType;
- (bool)hidesTermsAndConditions;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (void)setECommerceLink:(id)arg1;
- (void)setHidesTermsAndConditions:(bool)arg1;

@end
