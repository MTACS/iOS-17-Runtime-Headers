
@interface ICNoteLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource {
    <ICSearchIndexableNote> * _note;
    UIImage * _thumbnailImage;
}

@property (retain) <ICSearchIndexableNote> *note;
@property (nonatomic, copy) UIImage *thumbnailImage;

- (void).cxx_destruct;
- (id)detail;
- (id)iconImage;
- (id)init;
- (id)initWithNote:(id)arg1;
- (id)initWithNote:(id)arg1 thumbnailImage:(id)arg2;
- (id)note;
- (void)setNote:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (id)thumbnailImage;
- (id)title;

@end
