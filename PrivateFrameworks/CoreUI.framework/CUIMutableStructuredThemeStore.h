
@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {
    NSMutableDictionary * _apperanceNameIdentifierStore;
    NSString * _identifier;
    int  _maxApperanceNameIdentifier;
    int  _maxNameIdentifier;
    NSMutableDictionary * _memoryStore;
    NSMutableDictionary * _nameIdentifierStore;
    NSMutableDictionary * _renditionInfoStore;
}

- (void)_addRenditionInfoForImageWithName:(id)arg1 andKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (void)_removeRenditionInfoForImageWithName:(id)arg1;
- (id)allImageNames;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (id)appearances;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)clearRenditionCache;
- (void)dealloc;
- (id)defaultAppearanceName;
- (long long)deploymentPlatform;
- (id)deploymentPlatformString;
- (id)imagesWithName:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)insertCGImage:(struct CGImage { }*)arg1 withName:(id)arg2 andDescription:(id)arg3;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (long long)maximumRenditionKeyTokenCount;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)path;
- (void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
- (void)removeImagesNamed:(id)arg1;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForAssetWithName:(id)arg1 withDescription:(id)arg2;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 usingKeySignature:(id)arg2;
- (id)themeStore;
- (bool)usesCUISystemThemeRenditionKey;

@end
