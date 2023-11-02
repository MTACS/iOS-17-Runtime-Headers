
@interface SKUISettingsHeaderFooterDescription : NSObject {
    SKUIViewElement * _viewElement;
}

+ (id)_settingsHeaderFooterDescriptionWithFooterElement:(id)arg1;
+ (id)_settingsHeaderFooterDescriptionWithHeaderElement:(id)arg1;
+ (id)settingsHeaderFooterDescriptionWithViewElement:(id)arg1;
+ (Class)viewClassForSettingsHeaderFooterDescription:(id)arg1;

- (void).cxx_destruct;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)viewElement;

@end
