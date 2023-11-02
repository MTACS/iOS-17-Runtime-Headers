
@interface MFPSolidBrush : MFPBrush {
    OITSUColor * mColor;
}

- (void).cxx_destruct;
- (id)color;
- (void)fillPath:(id)arg1;
- (id)initWithColor:(id)arg1;
- (void)setColor:(id)arg1;

@end
