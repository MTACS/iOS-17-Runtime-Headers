
@interface PDFThumbnailView : UIView <NSCoding> {
    UIColor * _backgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIView<PDFThumbnailCollectionViewInterface> * _iconsView;
    long long  _layoutMode;
    PDFView * _pdfView;
    long long  _style;
    <PDFThumbnailDataSourceDelegate> * _thumbnailDataSourceDelegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    <PDFThumbnailContextMenuDelegate> * thumbnailContextMenuDelegate;
}

@property (nonatomic) PDFView *PDFView;
@property (nonatomic) bool allowsPageReordering;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) long long layoutMode;
@property (nonatomic, readonly) NSArray *selectedPages;
@property (nonatomic) <PDFThumbnailContextMenuDelegate> *thumbnailContextMenuDelegate;
@property (nonatomic) <PDFThumbnailDataSourceDelegate> *thumbnailDataSourceDelegate;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (id)PDFView;
- (void)_commonInitWithStyle:(long long)arg1;
- (void)_updateLayout;
- (bool)allowsPageReordering;
- (id)backgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)currentPageChanged:(id)arg1;
- (void)dealloc;
- (void)documentChanged:(id)arg1;
- (void)documentMutated:(id)arg1;
- (void)documentUnlocked:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)layoutMode;
- (void)pageChanged:(id)arg1;
- (id)selectedPages;
- (void)setAllowsPageReordering:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setPDFView:(id)arg1;
- (void)setThumbnailContextMenuDelegate:(id)arg1;
- (void)setThumbnailDataSourceDelegate:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setupNotifications;
- (id)thumbnailContextMenuDelegate;
- (id)thumbnailDataSourceDelegate;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (void)updateNotificationsForDocument;

@end
