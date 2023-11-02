
@interface SXEmailAddition : SXAddition

@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *to;

- (id)action;

@end
