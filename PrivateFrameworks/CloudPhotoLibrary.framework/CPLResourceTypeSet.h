
@interface CPLResourceTypeSet : NSObject {
    unsigned long long  _baseTypesBits;
    unsigned long long  _extraTypeBits;
}

@property (nonatomic, readonly) unsigned long long count;
@property (getter=isEmpty, nonatomic, readonly) bool empty;

- (void)addResourceType:(unsigned long long)arg1;
- (bool)containsResourceType:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateResourceTypesWithBlock:(id /* block */)arg1;
- (id)intersectionWithSet:(id)arg1;
- (bool)intersectsWithSet:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (void)removeResourceType:(unsigned long long)arg1;
- (id)unionSet:(id)arg1;

@end
