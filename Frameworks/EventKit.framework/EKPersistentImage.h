
@interface EKPersistentImage : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (id)colorData;
- (int)entityType;
- (id)identifier;
- (id)name;
- (void)setColorData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setType:(long long)arg1;
- (id)source;
- (long long)type;

@end
