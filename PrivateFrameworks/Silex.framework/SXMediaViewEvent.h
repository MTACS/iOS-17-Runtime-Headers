
@interface SXMediaViewEvent : SXMediaEvent {
    unsigned long long  _galleryImageCount;
    NSArray * _galleryImageIds;
}

@property (nonatomic) unsigned long long galleryImageCount;
@property (nonatomic, retain) NSArray *galleryImageIds;

- (void).cxx_destruct;
- (unsigned long long)galleryImageCount;
- (id)galleryImageIds;
- (void)setGalleryImageCount:(unsigned long long)arg1;
- (void)setGalleryImageIds:(id)arg1;

@end
