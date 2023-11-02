
@interface SAWeatherTVObject : SAWeatherAbstractObject

@property (nonatomic, copy) NSString *view;

+ (id)tVObject;
+ (id)tVObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setView:(id)arg1;
- (id)view;

@end
