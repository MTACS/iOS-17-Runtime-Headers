
@interface SKUIInfoViewElement : SKUIViewElement

@property (nonatomic, readonly) SKUILabelViewElement *titleElement;
@property (nonatomic, readonly) NSArray *valueElements;

- (id)titleElement;
- (id)valueElements;

@end
