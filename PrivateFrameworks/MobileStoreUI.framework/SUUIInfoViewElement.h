
@interface SUUIInfoViewElement : SUUIViewElement

@property (nonatomic, readonly) SUUILabelViewElement *titleElement;
@property (nonatomic, readonly) NSArray *valueElements;

- (id)titleElement;
- (id)valueElements;

@end
