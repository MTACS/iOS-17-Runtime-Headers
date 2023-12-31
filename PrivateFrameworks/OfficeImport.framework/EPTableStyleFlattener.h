
@interface EPTableStyleFlattener : EPStyleFlattener {
    unsigned long long  mHeaderRowCount;
    EDTable * mTable;
    unsigned long long  mTotalsRowCount;
}

- (void).cxx_destruct;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (void)clearCache;
- (id)collectionFromWorksheet:(id)arg1;
- (bool)isObjectSupported:(id)arg1;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)newExtractedGlobalStyleElements:(id)arg1;
- (id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (int)stripeOffset:(int)arg1 row:(bool)arg2;
- (id)styleFromObject:(id)arg1;

@end
