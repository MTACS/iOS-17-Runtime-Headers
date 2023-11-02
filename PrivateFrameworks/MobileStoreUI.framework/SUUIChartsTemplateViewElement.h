
@interface SUUIChartsTemplateViewElement : SUUIViewElement {
    NSString * _type;
}

@property (nonatomic, readonly) SUUIActivityIndicatorViewElement *activityIndicator;
@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) SUUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)columns;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)navigationBarElement;
- (id)type;

@end
