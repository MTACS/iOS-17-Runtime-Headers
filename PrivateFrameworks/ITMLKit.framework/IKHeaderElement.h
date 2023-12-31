
@interface IKHeaderElement : IKViewElement

@property (nonatomic, readonly, retain) IKTextElement *descriptionText;
@property (nonatomic, readonly, retain) IKImageElement *image;
@property (nonatomic, readonly) long long separator;
@property (nonatomic, readonly, retain) IKTextElement *subtitle;
@property (nonatomic, readonly, retain) IKTextElement *title;

- (id)descriptionText;
- (id)image;
- (long long)separator;
- (id)subtitle;
- (id)title;

@end
