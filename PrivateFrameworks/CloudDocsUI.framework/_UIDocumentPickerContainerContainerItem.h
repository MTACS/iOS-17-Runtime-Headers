
@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {
    NSString * _cachedSubtitle;
    BRContainer * _container;
}

@property (nonatomic, readonly) BRContainer *container;

- (void).cxx_destruct;
- (id)_blockingThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 wantsBorder:(bool*)arg3;
- (void)_modelChanged;
- (id)container;
- (id)initWithContainer:(id)arg1;
- (id)modificationDate;
- (id)sortPath;
- (id)subtitle;
- (id)title;
- (long long)type;
- (id)url;

@end
