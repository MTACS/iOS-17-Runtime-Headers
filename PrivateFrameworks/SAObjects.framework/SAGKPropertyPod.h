
@interface SAGKPropertyPod : SAGKPodView

@property (nonatomic, copy) NSArray *propertyList;

+ (id)propertyPod;
+ (id)propertyPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)propertyList;
- (void)setPropertyList:(id)arg1;

@end
