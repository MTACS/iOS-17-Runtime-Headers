
@interface MKMapItemMetadata : NSObject {
    GEOBusiness * _business;
    NSMutableDictionary * _imageCache;
}

@property (nonatomic, readonly) GEOBusiness *business;
@property (nonatomic, retain) NSMutableDictionary *imageCache;

- (void).cxx_destruct;
- (void)addImage:(id)arg1 forURL:(id)arg2;
- (id)business;
- (id)description;
- (id)imageCache;
- (id)imageForURL:(id)arg1;
- (id)initWithBusiness:(id)arg1;
- (void)setImageCache:(id)arg1;

@end
