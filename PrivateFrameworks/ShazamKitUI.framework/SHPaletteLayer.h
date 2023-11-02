
@interface SHPaletteLayer : CALayer {
    SHPalette * _palette;
}

@property (nonatomic, readonly) SHPalette *palette;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPalette:(id)arg1;
- (id)palette;
- (void)setup;

@end
