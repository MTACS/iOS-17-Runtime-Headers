
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {
    bool  _hasCustomAdvances;
    bool  _implementsCustomAdvancesForIndexes;
    bool  _implementsOrigins;
    CTGlyphStorageInterface * _interface;
}

@property (nonatomic, readonly) bool hasCustomAdvances;
@property (nonatomic, readonly) bool implementsCustomAdvancesForIndexes;
@property (nonatomic, readonly) bool implementsOrigins;

- (long long)attachmentCountAtIndex:(long long)arg1;
- (id)copyWithRange:(struct { long long x1; long long x2; })arg1;
- (struct CGSize { double x1; double x2; })customAdvanceForIndex:(long long)arg1;
- (void)disposeGlyphStack;
- (void)getCustomAdvances:(struct CGSize { double x1; double x2; }*)arg1 forIndexes:(const long long*)arg2 count:(long long)arg3;
- (bool)hasCustomAdvances;
- (bool)implementsCustomAdvancesForIndexes;
- (bool)implementsOrigins;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (id)initWithInterface:(id)arg1;
- (id)initWithInterface:(id)arg1 options:(unsigned int)arg2;
- (void)insertGlyphsAtRange:(struct { long long x1; long long x2; })arg1;
- (void)moveGlyphsFromRange:(struct { long long x1; long long x2; })arg1 toIndex:(long long)arg2;
- (struct CGPoint { double x1; double x2; })originAtIndex:(long long)arg1;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)puntStringIndicesInRange:(struct { long long x1; long long x2; })arg1 by:(long long)arg2;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void*)refCon;
- (void)resetOrigins:(struct { long long x1; long long x2; })arg1;
- (void)setAdvance:(struct CGSize { double x1; double x2; })arg1 atIndex:(long long)arg2;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)sync;

@end
