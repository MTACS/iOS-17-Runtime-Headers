
@interface CHDLegendEntry : NSObject {
    unsigned int  mEntryIndex;
    unsigned long long  mFontIndex;
    EDResources * mResources;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned int)entryIndex;
- (id)font;
- (unsigned long long)fontIndex;
- (id)initWithResources:(id)arg1;
- (void)setEntryIndex:(unsigned int)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;

@end
