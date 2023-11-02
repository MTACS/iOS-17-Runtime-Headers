
@interface PhotosUICore.PhotosDetailsNoLocationSearchResult : NSObject <PXPhotosDetailsLocationSearchResult> {
    void id;
    void image;
    void imageColor;
    void subtitle;
    void title;
}

@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (id)subtitle;
- (id)title;

@end
