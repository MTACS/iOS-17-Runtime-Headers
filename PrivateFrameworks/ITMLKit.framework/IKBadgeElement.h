
@interface IKBadgeElement : IKImageElement

@property (nonatomic, readonly, retain) NSString *textContent;

+ (bool)shouldParseChildDOMElements;

- (id)textContent;

@end
