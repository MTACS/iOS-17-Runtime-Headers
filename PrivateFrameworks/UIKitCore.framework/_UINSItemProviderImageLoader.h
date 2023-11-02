
@interface _UINSItemProviderImageLoader : _UIImageLoader {
    NSProgress * __progress;
    NSItemProvider * _itemProvider;
    NSString * _typeIdentifier;
}

@property (setter=_setProgress:, retain) NSProgress *_progress;

- (void).cxx_destruct;
- (id)_progress;
- (bool)_really_cancel;
- (void)_really_loadImage:(id /* block */)arg1;
- (void)_setProgress:(id)arg1;
- (id)initWithItemProvider:(id)arg1 typeIdentifier:(id)arg2;

@end
