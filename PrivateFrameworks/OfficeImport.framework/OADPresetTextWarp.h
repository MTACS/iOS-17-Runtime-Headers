
@interface OADPresetTextWarp : OADTextWarp {
    unsigned char  mPresetTextWarpType;
}

+ (id)stringWithPresetTextWarpType:(unsigned char)arg1;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned char)presetTextWarpType;
- (void)setPresetTextWarpType:(unsigned char)arg1;

@end
