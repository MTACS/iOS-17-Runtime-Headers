
@interface GEOPictureItem : NSObject <GEOPictureItem, MUPlaceTileViewModel> {
    <GEOMapItemPhoto> * _photo;
    int  _pictureItemPhotoType;
    NSString * _primaryText;
    NSString * _secondaryText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long expectedNumberOfFooterLines;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOMapItemPhoto> *photo;
@property (nonatomic, readonly) int pictureItemPhotoType;
@property (nonatomic, readonly) NSString *primaryText;
@property (nonatomic, readonly) NSString *secondaryText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tileName;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (id)init;
- (id)initWithPhoto:(id)arg1 pictureItemPhotoType:(int)arg2 primaryText:(id)arg3 secondaryText:(id)arg4;
- (id)initWithPictureItem:(id)arg1;
- (id)photo;
- (int)pictureItemPhotoType;
- (id)primaryText;
- (id)secondaryText;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (unsigned long long)expectedNumberOfFooterLines;
- (void)fetchBadgeIconWithCompletion:(id /* block */)arg1;
- (void)fetchFallbackIconWithCompletion:(id /* block */)arg1;
- (void)fetchImageTilewWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)footerAttributedStringForFont:(id)arg1;
- (id)subtitleAttributedStringForFont:(id)arg1;
- (id)tileName;
- (id)tileSubtitle;

@end
