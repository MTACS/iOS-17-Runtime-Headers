
@interface GEOPlacePhotoLookupResult : NSObject {
    GEOMapItemIdentifier * _mapItemIdentifier;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _originalRange;
    NSArray * _photos;
    unsigned long long  _totalPhotoCount;
}

@property (nonatomic, readonly) GEOMapItemIdentifier *mapItemIdentifier;
@property (nonatomic, readonly) NSArray *photos;
@property (nonatomic, readonly) unsigned long long totalPhotoCount;

+ (void)buildLookupResultForPlaceWithPhotoCategories:(id)arg1 mapItemIdentifier:(id)arg2 originalRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 completion:(id /* block */)arg4;
+ (void)buildVendorLookupResultForPlaceWithCaptionedPhotos:(id)arg1 mapItemIdentifier:(id)arg2 originalRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)initWithPhotos:(id)arg1 totalPhotoCount:(unsigned long long)arg2 mapItemItemIdentifier:(id)arg3 originalRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)mapItemIdentifier;
- (id)photos;
- (unsigned long long)totalPhotoCount;

@end
