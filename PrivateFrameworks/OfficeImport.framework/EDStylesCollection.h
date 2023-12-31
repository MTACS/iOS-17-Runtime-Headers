
@interface EDStylesCollection : EDCollection {
    unsigned long long  mDefaultWorkbookStyleIndex;
}

- (unsigned long long)addObject:(id)arg1;
- (id)defaultWorkbookStyle;
- (unsigned long long)defaultWorkbookStyleIndex;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setDefaultWorkbookStyleIndex:(unsigned long long)arg1;

@end
