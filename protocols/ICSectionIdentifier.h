
@protocol ICSectionIdentifier <ICItemIdentifier>

@required

+ (NSArray *)sortDescriptors;

- (NSString *)expansionStateContext;
- (bool)isCollapsible;
- (NSString *)title;

@end
