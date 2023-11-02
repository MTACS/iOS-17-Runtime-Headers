
@interface SUUIActivityIndicatorViewElement : SUUIViewElement {
    double  _period;
}

@property (nonatomic, readonly) SUUIImageViewElement *image;
@property (nonatomic, readonly) double period;
@property (nonatomic, readonly) SUUILabelViewElement *text;

- (id)image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isDisabled;
- (long long)pageComponentType;
- (double)period;
- (id)text;

@end
