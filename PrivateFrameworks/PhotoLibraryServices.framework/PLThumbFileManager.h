
@interface PLThumbFileManager : PLThumbFileManagerCore

- (bool)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (struct CGImage { }*)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2;
- (bool)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;

@end
