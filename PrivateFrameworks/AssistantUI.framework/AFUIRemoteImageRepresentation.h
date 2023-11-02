
@interface AFUIRemoteImageRepresentation : NSObject <NSItemProviderWriting> {
    UIImage * _image;
    NSURL * _imageURL;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSURL *imageURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)image;
- (id)imageURL;
- (id)initWithImageURL:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)setImage:(id)arg1;
- (void)setImageURL:(id)arg1;

@end
