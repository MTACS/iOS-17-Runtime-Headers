
@interface MTLRasterizationRateLayerArrayInternal : MTLRasterizationRateLayerArray {
    MTLRasterizationRateMapDescriptor * _parent;
}

- (id)initWithParent:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
