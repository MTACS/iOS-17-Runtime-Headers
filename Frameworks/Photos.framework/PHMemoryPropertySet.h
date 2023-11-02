
@interface PHMemoryPropertySet : NSObject <PHMemoryPropertySet> {
    PHMemory * _memory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHMemory *memory;
@property (readonly) Class superclass;

+ (id)entityName;
+ (bool)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertiesToPrefetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 memory:(id)arg2 prefetched:(bool)arg3;
- (id)memory;

@end
