
@protocol MDLObjectContainerComponent <MDLComponent, NSFastEnumeration>

@required

- (void)addObject:(MDLObject *)arg1;
- (unsigned long long)count;
- (MDLObject *)objectAtIndexedSubscript:(unsigned long long)arg1;
- (NSArray *)objects;
- (void)removeObject:(MDLObject *)arg1;

@end
