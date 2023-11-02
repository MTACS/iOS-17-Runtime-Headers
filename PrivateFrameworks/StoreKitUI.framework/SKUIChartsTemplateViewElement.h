
@interface SKUIChartsTemplateViewElement : SKUIViewElement {
    NSString * _type;
}

@property (nonatomic, readonly) SKUIActivityIndicatorViewElement *activityIndicator;
@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) SKUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)columns;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)navigationBarElement;
- (id)type;

@end
