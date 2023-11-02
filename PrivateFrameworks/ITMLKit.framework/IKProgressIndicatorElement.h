
@interface IKProgressIndicatorElement : IKViewElement

@property (nonatomic, readonly) unsigned long long percentage;
@property (nonatomic, readonly) NSString *type;

+ (bool)shouldParseChildDOMElements;

- (unsigned long long)percentage;
- (id)type;

@end
