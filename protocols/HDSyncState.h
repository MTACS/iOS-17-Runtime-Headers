
@protocol HDSyncState <HDSyncCodable>

@required

- (bool)decodedObjectOfClass:(Class)arg1 version:(long long)arg2 decodedObject:(id*)arg3 error:(id*)arg4;
- (NSString *)domain;
- (NSString *)key;
- (void)setCodableObject:(id <HDSyncCodable>)arg1 version:(long long)arg2 profile:(HDProfile *)arg3;
- (void)setDomain:(NSString *)arg1;
- (void)setKey:(NSString *)arg1;
- (void)setVersionRange:(struct { int x1; int x2; })arg1;
- (struct { int x1; int x2; })versionRange;

@end
