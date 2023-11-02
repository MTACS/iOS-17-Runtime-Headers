
@interface AVTStickerSceneProp : AVTStickerProp {
    SCNNode * _rootNode;
}

@property (nonatomic, readonly) SCNNode *rootNode;

- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)initWithRootNode:(void *)arg1 scale:(void *)arg2 position:(void *)arg3 rotation:(void *)arg4 renderLast:(void *)arg5 palettesDescriptions:(void *)arg6 modifiers:(void *)arg7 adjustments:(void *)arg8; // needs 8 arg types, found 5: id, bool, id, id, id
- (id)rootNode;

@end
