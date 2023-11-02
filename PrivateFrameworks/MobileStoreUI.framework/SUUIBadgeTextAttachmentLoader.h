
@interface SUUIBadgeTextAttachmentLoader : NSObject <SUUIArtworkRequestDelegate> {
    NSMapTable * _imageRequests;
    SUUIResourceLoader * _resourceLoader;
    NSHashTable * _stringViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)connectStringView:(id)arg1;
- (void)disconnectStringView:(id)arg1;
- (id)initWithResourceLoader:(id)arg1;
- (bool)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(long long)arg3;

@end
