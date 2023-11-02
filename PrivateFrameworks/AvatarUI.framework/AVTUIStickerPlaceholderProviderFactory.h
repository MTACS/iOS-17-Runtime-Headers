
@interface AVTUIStickerPlaceholderProviderFactory : NSObject {
    id /* block */  _imageProvider;
    NSMutableArray * _queuedHandlers;
}

@property (nonatomic, readonly) id /* block */ imageProvider;
@property (nonatomic, retain) NSMutableArray *queuedHandlers;

- (void).cxx_destruct;
- (id /* block */)imageProvider;
- (id)initWithImageProvider:(id /* block */)arg1;
- (id /* block */)placeholderProvider;
- (id)queuedHandlers;
- (void)setQueuedHandlers:(id)arg1;

@end
