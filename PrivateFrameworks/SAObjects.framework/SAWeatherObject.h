
@interface SAWeatherObject : SAWeatherAbstractObject

@property (nonatomic, copy) NSString *view;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setView:(id)arg1;
- (id)view;

@end
