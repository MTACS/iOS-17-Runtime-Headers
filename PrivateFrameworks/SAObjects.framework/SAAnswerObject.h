
@interface SAAnswerObject : SADomainObject

@property (nonatomic, copy) NSArray *lines;
@property (nonatomic, copy) NSString *title;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)lines;
- (void)setLines:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
