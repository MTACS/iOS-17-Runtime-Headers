
@interface SAUIAlternateProviderResult : SADomainObject

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSNumber *numberOfResults;
@property (nonatomic, retain) SAUIImageResource *providerImage;
@property (nonatomic, copy) NSString *providerName;

+ (id)alternateProviderResult;
+ (id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)numberOfResults;
- (id)providerImage;
- (id)providerName;
- (void)setCommands:(id)arg1;
- (void)setNumberOfResults:(id)arg1;
- (void)setProviderImage:(id)arg1;
- (void)setProviderName:(id)arg1;

@end
