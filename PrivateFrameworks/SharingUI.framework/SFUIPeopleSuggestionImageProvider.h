
@interface SFUIPeopleSuggestionImageProvider : SFUIImageProvider {
    SFUIAvatarImageRenderer * _imageRenderer;
    unsigned long long  _layoutDirection;
    UIImage * _placeholderImage;
    NSObject<OS_dispatch_queue> * _placeholderImageQueue;
    UIImage * _processedPlaceholderImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly) SFUIAvatarImageRenderer *imageRenderer;
@property (nonatomic, readonly) unsigned long long layoutDirection;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *placeholderImageQueue;
@property (nonatomic, readonly) UIImage *processedPlaceholderImage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (void)_deliverIconImage:(id)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)_fetchAvatarImageForPeopleSuggestion:(id)arg1;
- (bool)_fetchNoAppTransportImageForIdentifier:(id)arg1;
- (void)_fetchTransportImageForPeopleSuggestion:(id)arg1;
- (void)_processPlaceholderImage;
- (id)imageRenderer;
- (id)initWithTargetSize:(struct CGSize { double x1; double x2; })arg1 layoutDirection:(unsigned long long)arg2;
- (unsigned long long)layoutDirection;
- (void)performImageRequest:(id)arg1;
- (id)placeholderImage;
- (id)placeholderImageQueue;
- (id)processedPlaceholderImage;
- (int)requestAvatarImageForPeopleSuggestion:(id)arg1 resultHandler:(id /* block */)arg2;
- (int)requestTransportImageForPeopleSuggestion:(id)arg1 resultHandler:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })targetSize;

@end
