
@interface GEOStorefrontPresentationInfo : NSObject {
    GEOStorefrontView * _closeUpView;
    NSURL * _overlayImageURL;
    GEOStorefrontView * _standOffView;
}

@property (nonatomic, readonly) GEOStorefrontView *closeUpView;
@property (nonatomic, readonly) NSURL *overlayImageURL;
@property (nonatomic, readonly) GEOStorefrontView *standOffView;

- (void).cxx_destruct;
- (id)closeUpView;
- (id)init;
- (id)initWithStorefrontPresentation:(id)arg1;
- (id)overlayImageURL;
- (id)standOffView;

@end
