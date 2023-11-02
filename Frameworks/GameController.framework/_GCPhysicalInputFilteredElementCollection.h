
@interface _GCPhysicalInputFilteredElementCollection : GCPhysicalInputElementCollection {
    GCPhysicalInputElementCollection * _backingCollection;
    NSArray * _cached_filteredElements;
    Protocol * _filter;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)elementAtIndex:(unsigned long long)arg1;
- (id)elementEnumerator;
- (id)elementForAlias:(id)arg1;

@end
