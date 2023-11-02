
@interface _UIDragPreviewBlockProvider : NSObject <_UIDragPreviewProvider> {
    _UIDraggingImageComponent * _imageComponent;
    UIDragPreview * _preview;
    id /* block */  _previewProviderBlock;
}

@property (nonatomic, readonly) <_UIDragPreviewProvider> *_dragPreviewProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIDragPreview *preview;
@property (readonly) Class superclass;

+ (id)previewProviderWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_createImageComponent;
- (id)_dragPreviewProvider;
- (id)_duiPreview;
- (id)imageComponent;
- (id)preview;

@end
