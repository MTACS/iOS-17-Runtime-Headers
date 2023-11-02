
@interface SUUIImageGridViewElement : SUUIViewElement {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (long long)columnCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (struct CGSize { double x1; double x2; })size;

@end