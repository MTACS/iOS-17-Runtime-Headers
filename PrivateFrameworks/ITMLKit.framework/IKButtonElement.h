
@interface IKButtonElement : IKViewElement

@property (nonatomic, readonly) long long buttonType;
@property (nonatomic, readonly, copy) NSString *confirmationText;
@property (nonatomic, readonly, retain) IKImageElement *image;
@property (nonatomic, readonly, retain) IKTextElement *text;

- (long long)buttonType;
- (id)confirmationText;
- (id)image;
- (id)text;

@end
