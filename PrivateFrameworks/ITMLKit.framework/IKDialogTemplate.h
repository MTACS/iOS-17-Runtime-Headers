
@interface IKDialogTemplate : IKViewElement

@property (nonatomic, readonly, retain) NSArray *buttons;
@property (nonatomic, readonly, retain) IKTextElement *descriptionText;
@property (nonatomic, readonly, retain) IKTextElement *title;
@property (nonatomic, readonly) unsigned long long type;

- (id)buttons;
- (id)descriptionText;
- (id)title;
- (unsigned long long)type;

@end
