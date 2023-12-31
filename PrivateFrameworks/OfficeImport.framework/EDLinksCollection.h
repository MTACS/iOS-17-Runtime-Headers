
@interface EDLinksCollection : NSObject {
    NSMutableArray * mLinks;
    NSMutableArray * mReferences;
}

- (void).cxx_destruct;
- (unsigned long long)addLink:(id)arg1;
- (void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned long long*)arg2 nameIndex:(unsigned long long*)arg3;
- (unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)arg1 lastSheetIndex:(unsigned long long)arg2;
- (unsigned long long)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (unsigned long long)addReference:(id)arg1;
- (bool)convertLinkReferenceIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long*)arg2 lastSheetIndex:(unsigned long long*)arg3;
- (id)description;
- (unsigned long long)indexOfFirstLinkWithType:(int)arg1;
- (unsigned long long)indexOfReference:(id)arg1;
- (id)init;
- (id)linkAtIndex:(unsigned long long)arg1;
- (unsigned long long)linkIndexCreateIfNeededWithType:(int)arg1;
- (unsigned long long)linksCount;
- (id)referenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)referencesCount;

@end
