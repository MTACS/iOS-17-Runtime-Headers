
@protocol FBKChoiceSetResolverProtocol <NSObject>

@required

+ (NSString *)displayValueForChoiceValue:(NSString *)arg1;

- (NSArray *)choices;

@optional

- (void)prefetchChoices;

@end
