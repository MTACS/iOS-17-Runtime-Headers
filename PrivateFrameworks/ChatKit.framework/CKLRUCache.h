
@interface CKLRUCache : CPLRUDictionary <CKCache>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;

@end
