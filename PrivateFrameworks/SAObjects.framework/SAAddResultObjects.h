
@interface SAAddResultObjects : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *objects;
@property (nonatomic, copy) NSArray *resultObjects;

+ (id)addResultObjects;
+ (id)addResultObjectsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)objects;
- (bool)requiresResponse;
- (id)resultObjects;
- (void)setObjects:(id)arg1;
- (void)setResultObjects:(id)arg1;

@end
