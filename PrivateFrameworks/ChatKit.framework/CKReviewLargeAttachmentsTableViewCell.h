
@interface CKReviewLargeAttachmentsTableViewCell : CKAbstractReviewTableViewCell {
    CKAttachmentItem * _attachmentItem;
    UIImageView * _previewView;
}

@property (nonatomic, retain) CKAttachmentItem *attachmentItem;
@property (nonatomic, retain) UIImageView *previewView;

+ (struct CGSize { double x1; double x2; })leftHandSideViewSize;
+ (double)requestedHeight;

- (void).cxx_destruct;
- (void)_updateImageViewForAttachmentItem;
- (id)attachmentItem;
- (id)leftHandSideView;
- (void)prepareForReuse;
- (id)previewView;
- (void)setAttachmentItem:(id)arg1;
- (void)setModelObject:(id)arg1;
- (void)setPreviewView:(id)arg1;

@end
