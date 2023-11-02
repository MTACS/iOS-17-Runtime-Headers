
@interface GCPhysicalInputElementCollection : NSObject <NSFastEnumeration>

@property (readonly) unsigned long long count;

- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)elementAtIndex:(unsigned long long)arg1;
- (id)elementEnumerator;
- (id)elementForAlias:(id)arg1;
- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;

@end
