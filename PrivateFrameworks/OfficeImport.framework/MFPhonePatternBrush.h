
@interface MFPhonePatternBrush : MFPhoneBrush {
    MFPhoneBitmap * m_pattern;
    bool  m_usePaletteForBilevel;
}

+ (id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(bool)arg2;

- (void).cxx_destruct;
- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (id)initWithBitmap:(id)arg1 usePaletteForBilevel:(bool)arg2;

@end
