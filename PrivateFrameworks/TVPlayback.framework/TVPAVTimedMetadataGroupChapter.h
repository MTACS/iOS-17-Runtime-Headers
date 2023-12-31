
@interface TVPAVTimedMetadataGroupChapter : TVPMutableChapter {
    AVMetadataItem * _imageMetadataItem;
}

@property (nonatomic, retain) AVMetadataItem *imageMetadataItem;

- (void).cxx_destruct;
- (void)_loadChapterNameFromMetadataItem:(id)arg1;
- (id)imageMetadataItem;
- (id)initWithAVTimedMetadataGroup:(id)arg1 filterByLanguages:(id)arg2;
- (void)setImageMetadataItem:(id)arg1;

@end
