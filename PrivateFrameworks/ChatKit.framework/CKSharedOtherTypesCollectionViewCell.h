
@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell {
    UIImageView * _thumbnailImageView;
}

@property (nonatomic, retain) UIImageView *thumbnailImageView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)configureWithAttachmentItem:(id)arg1;
- (void)configureWithThumbnail:(id)arg1 fileURL:(id)arg2;
- (void)layoutSubviews;
- (void)setThumbnailImageView:(id)arg1;
- (id)thumbnailImageView;

@end
