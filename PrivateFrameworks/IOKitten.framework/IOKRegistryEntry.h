
@interface IOKRegistryEntry : IOKObject

@property (nonatomic, readonly) unsigned long long entryID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSDictionary *properties;

// Image: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten

+ (id)entryFromPath:(id)arg1;
+ (id)registryIteratorForPlane:(id)arg1 withOptions:(unsigned int)arg2 error:(id*)arg3;
+ (id)rootEntry;

- (id)childInPlane:(id)arg1 error:(id*)arg2;
- (id)childInServicePlaneWithError:(id*)arg1;
- (id)childIteratorInPlane:(id)arg1 error:(id*)arg2;
- (id)childIteratorInPlane:(id)arg1 error:(id*)arg2 withEnumerationBlock:(id /* block */)arg3;
- (id)childIteratorInServicePlaneWithError:(id*)arg1;
- (id)childIteratorInServicePlaneWithError:(id*)arg1 enumerationBlock:(id /* block */)arg2;
- (unsigned long long)entryID;
- (id)initWithIOObject:(unsigned int)arg1;
- (id)initWithRegistryEntry:(unsigned int)arg1;
- (bool)isAttachedToPlane:(id)arg1;
- (id)locationInPlane:(id)arg1 error:(id*)arg2;
- (id)locationInServicePlaneWithError:(id*)arg1;
- (id)name;
- (id)nameInPlane:(id)arg1 error:(id*)arg2;
- (id)nameInServicePlaneWithError:(id*)arg1;
- (id)parentEntryInPlane:(id)arg1 error:(id*)arg2;
- (id)parentEntryInServicePlaneWithError:(id*)arg1;
- (id)parentIteratorInPlane:(id)arg1 error:(id*)arg2;
- (id)parentIteratorInPlane:(id)arg1 error:(id*)arg2 withEnumerationBlock:(id /* block */)arg3;
- (id)parentIteratorInServicePlaneWithError:(id*)arg1;
- (id)parentIteratorInServicePlaneWithError:(id*)arg1 enumerationBlock:(id /* block */)arg2;
- (id)pathInPlane:(id)arg1;
- (id)pathInServicePlane;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (id)registryIteratorForPlane:(id)arg1 withOptions:(unsigned int)arg2 error:(id*)arg3;
- (id)registryIteratorForServicePlaneWithOptions:(unsigned int)arg1 error:(id*)arg2;
- (id)searchForPropertyWithKey:(id)arg1 inPlane:(id)arg2;
- (void)setProperties:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync

- (id)iodProperties;
- (id)iodPropertyForKey:(id)arg1;

@end
