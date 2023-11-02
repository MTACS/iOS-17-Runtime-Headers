
@interface SKUIExpandPageComponent : SKUIPageComponent {
    NSMutableArray * _childComponents;
    SKUIExpandViewElement * _viewElement;
}

@property (nonatomic, readonly) SKUIExpandViewElement *viewElement;

- (void).cxx_destruct;
- (id)childComponentForIndex:(long long)arg1;
- (id)childComponents;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)metricsElementName;
- (id)viewElement;

@end
