
@interface SKUIActivityIndicatorViewElement : SKUIViewElement {
    double  _period;
}

@property (nonatomic, readonly) SKUIImageViewElement *image;
@property (nonatomic, readonly) double period;
@property (nonatomic, readonly) SKUILabelViewElement *text;

- (id)image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isDisabled;
- (long long)pageComponentType;
- (double)period;
- (id)text;

@end
