
@interface EDLinkReference : NSObject {
    unsigned long long  mFirstSheetIndex;
    unsigned long long  mLastSheetIndex;
    unsigned long long  mLinkIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;

- (id)description;
- (unsigned long long)firstSheetIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLinkReference:(id)arg1;
- (bool)isWorkbookLevelReference;
- (unsigned long long)lastSheetIndex;
- (unsigned long long)linkIndex;
- (void)setFirstSheetIndex:(unsigned long long)arg1;
- (void)setLastSheetIndex:(unsigned long long)arg1;
- (void)setLinkIndex:(unsigned long long)arg1;

@end
