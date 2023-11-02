
@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary * mFontTable;
    NSMutableArray * mFontsInOrderOfInsertion;
}

- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)count;
- (id)createFontWithName:(id)arg1;
- (id)description;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(bool)arg2;
- (id)fonts;
- (unsigned long long)indexOfFont:(id)arg1;
- (id)init;

@end
