
@interface UICollectionViewDropPlaceholder : UICollectionViewPlaceholder {
    id /* block */  _previewParametersProvider;
}

@property (nonatomic, copy) id /* block */ previewParametersProvider;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)previewParametersProvider;
- (void)setPreviewParametersProvider:(id /* block */)arg1;

@end
