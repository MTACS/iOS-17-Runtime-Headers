
@interface SUActivityItemProvider : UIActivityItemProvider {
    UIActivity * _activity;
    <SUActivityItemProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _lastProvidedItem;
    UIImage * _previewImage;
}

@property <SUActivityItemProviderDelegate> *delegate;
@property (setter=setSUActivity:, retain) UIActivity *suActivity;
@property (readonly) id suLastProvidedItem;
@property (setter=setSUPreviewImage:, retain) UIImage *suPreviewImage;

- (void)dealloc;
- (id)delegate;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;
- (void)setDelegate:(id)arg1;
- (void)setSUActivity:(id)arg1;
- (void)setSUPreviewImage:(id)arg1;
- (id)suActivity;
- (id)suLastProvidedItem;
- (id)suPreviewImage;

@end
