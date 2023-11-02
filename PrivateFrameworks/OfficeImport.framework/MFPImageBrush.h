
@interface MFPImageBrush : MFPBrush {
    OITSUImage * mPhoneImage;
    OITSUColor * mPhonePatternColor;
}

- (void).cxx_destruct;
- (id)color;
- (void)fillPath:(id)arg1;
- (id)initWithPhoneImage:(id)arg1;

@end
