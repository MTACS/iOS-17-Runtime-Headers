
@interface CKPassMediaObject : CKPassbookMediaObject {
    UIImage * _icon;
}

@property (nonatomic, retain) UIImage *icon;

- (void).cxx_destruct;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)icon;
- (id)initWithTransfer:(id)arg1 context:(id)arg2 forceInlinePreview:(bool)arg3;
- (id)passView;
- (void)setIcon:(id)arg1;
- (id)subtitle;
- (id)title;

@end
