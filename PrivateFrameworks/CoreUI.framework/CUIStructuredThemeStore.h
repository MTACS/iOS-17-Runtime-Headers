
@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {
    NSDictionary * _aliasDictionary;
    int (* _attributePresent;
    NSString * _bundleID;
    NSMutableDictionary * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSSet * _legacyFlippableSet;
    unsigned int  _mainBundle;
    NSCache * _nameCache;
    NSCache * _namedRenditionKeyCache;
    CUICommonAssetStorage * _store;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _storeLock;
    unsigned long long  _themeIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool mainBundle;
@property (readonly) Class superclass;

- (void)_commonInit;
- (bool)_formatStorageKeyArrayBytes:(void*)arg1 length:(unsigned long long)arg2 fromKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg3;
- (id)_newRenditionKeyDataFromKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (bool)_subImageTexturingShouldBeSupported;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)aliasForName:(id)arg1;
- (id)allImageNames;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (id)appearances;
- (bool)assetExistsForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)authoredWithSchemaVersion;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)bundleID;
- (bool)caAllowSubimageOfImage:(struct CGImage { }*)arg1;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)catalogGlobals;
- (void)clearRenditionCache;
- (unsigned long long)colorSpaceID;
- (bool)containsLookupForName:(id)arg1;
- (id)convertRenditionKeyToKeyData:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned long long)arg3;
- (id)copyLookupKeySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)defaultAppearanceName;
- (long long)deploymentPlatform;
- (id)deploymentPlatformString;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (double)fontSizeForFontSizeType:(id)arg1;
- (bool)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3;
- (bool)getPhysicalColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 withName:(id)arg2;
- (bool)hasPhysicalColorWithName:(id)arg1;
- (bool)imageNamedShouldFlip:(id)arg1;
- (id)imagesWithName:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (const struct _renditionkeyattributeindex { unsigned long long x1; unsigned char x2[65]; unsigned int x3; unsigned int x4[29]; }*)keyAttributeIndex;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (id)keySignatureForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned short)localizationIdentifierForName:(id)arg1;
- (bool)localizationWorkaroundForKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 withLocale:(id)arg2;
- (id)localizations;
- (id)lookupAssetForKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (bool)mainBundle;
- (id)mappedAliases;
- (long long)maximumRenditionKeyTokenCount;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)nameForLocalizationIdentifier:(unsigned short)arg1;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)renditionKeyFormat;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 usingKeySignature:(id)arg2;
- (void)setBundleID:(id)arg1;
- (void)setMainBundle:(bool)arg1;
- (void)setThemeIndex:(unsigned long long)arg1;
- (id)store;
- (unsigned long long)themeIndex;
- (id)themeStore;
- (unsigned int)thinnedWithCoreUIVersion;
- (bool)usesCUISystemThemeRenditionKey;

@end
