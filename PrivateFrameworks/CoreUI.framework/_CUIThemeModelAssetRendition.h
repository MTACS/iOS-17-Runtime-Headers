
@interface _CUIThemeModelAssetRendition : CUIThemeRendition {
    MDLAsset * _asset;
    NSMutableArray * _meshKeys;
}

@property (readonly) NSArray *meshKeys;

- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 version:(unsigned int)arg2;
- (void)dealloc;
- (id)initForArchiving:(id)arg1 withMeshRenditionKeys:(id)arg2;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 version:(unsigned int)arg3;
- (id)meshKeys;
- (id)modelAsset;
- (unsigned long long)writeToData:(id)arg1;

@end
