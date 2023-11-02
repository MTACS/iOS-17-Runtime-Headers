
@interface PXArrayDataSection : PXDataSection {
    NSArray * _sectionContent;
}

@property (nonatomic, readonly, copy) NSArray *sectionContent;

- (void).cxx_destruct;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (long long)indexOfObject:(id)arg1;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithOutlineObject:(id)arg1 sectionContent:(id)arg2;
- (id)initWithSectionContent:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (id)sectionContent;
- (long long)validatedIndexOfObject:(id)arg1 hintIndex:(long long)arg2;

@end
