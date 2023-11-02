
@interface SUUIStackItemViewElement : SUUIItemViewElement

@property (nonatomic, readonly) NSArray *imageElements;
@property (nonatomic, readonly) SUUILabelViewElement *textElement;

- (id)imageElements;
- (long long)pageComponentType;
- (id)textElement;

@end
