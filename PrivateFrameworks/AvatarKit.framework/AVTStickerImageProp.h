
@interface AVTStickerImageProp : AVTStickerProp {
    UIImage * _image;
}

@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)image;
- (id)initWithImage:(void *)arg1 size:(void *)arg2 scale:(void *)arg3 position:(void *)arg4 renderLast:(void *)arg5 orientToCamera:(void *)arg6 rotation:(void *)arg7 palettesDescriptions:(void *)arg8 modifiers:(void *)arg9 adjustments:(void *)arg10; // needs 10 arg types, found 7: id, struct CGSize { double x1; double x2; }, bool, bool, id, id, id

@end
