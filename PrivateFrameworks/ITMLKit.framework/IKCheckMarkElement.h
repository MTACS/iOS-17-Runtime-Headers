
@interface IKCheckMarkElement : IKViewElement

@property (nonatomic, readonly) unsigned long long alignment;

+ (bool)shouldParseChildDOMElements;

- (unsigned long long)alignment;

@end
