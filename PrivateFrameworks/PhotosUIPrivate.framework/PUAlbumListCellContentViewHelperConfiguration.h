
@interface PUAlbumListCellContentViewHelperConfiguration : NSObject {
    NSString * _albumSubtitleFormat;
    bool  _allowsEmailInSubtitle;
    long long  _cellContentViewLayout;
    bool  _cornerOverlaysDisabled;
    double  _dynamicSubtitleleading;
    double  _dynamicTitleLeading;
    double  _dynamicTopLeading;
    unsigned long long  _folderStackViewStyle;
    double  _gridItemSpacing;
    double  _gridMargin;
    bool  _hasClearBackgroundColor;
    bool  _hasRoundedCorners;
    long long  _imageContentMode;
    NSString * _nameOfEmptyAlbumPlaceholderImage;
    NSString * _nameOfEmptyPeopleAlbumPlaceholderImage;
    NSString * _nameOfEmptySharedAlbumPlaceholderImage;
    PUPhotoDecoration * _photoDecoration;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    double  _posterSquareCornerRadius;
    double  _posterSubitemCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _previewInsets;
    bool  _shouldCenterTextHorizontally;
    bool  _shouldUseTableView;
    bool  _showsDeleteButtonOnCellContentView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _stackPerspectiveInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackPerspectiveOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _stackSize;
    unsigned long long  _stackViewStyle;
}

@property (nonatomic, copy) NSString *albumSubtitleFormat;
@property (nonatomic) bool allowsEmailInSubtitle;
@property (nonatomic) long long cellContentViewLayout;
@property (nonatomic) bool cornerOverlaysDisabled;
@property (nonatomic) double dynamicSubtitleleading;
@property (nonatomic) double dynamicTitleLeading;
@property (nonatomic) double dynamicTopLeading;
@property (nonatomic) unsigned long long folderStackViewStyle;
@property (nonatomic) double gridItemSpacing;
@property (nonatomic) double gridMargin;
@property (nonatomic) bool hasClearBackgroundColor;
@property (nonatomic) bool hasRoundedCorners;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, copy) NSString *nameOfEmptyAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfEmptyPeopleAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property (nonatomic, retain) PUPhotoDecoration *photoDecoration;
@property (nonatomic) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic) double posterSquareCornerRadius;
@property (nonatomic) double posterSubitemCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previewInsets;
@property (nonatomic) bool shouldCenterTextHorizontally;
@property (nonatomic) bool shouldUseTableView;
@property (nonatomic) bool showsDeleteButtonOnCellContentView;
@property (nonatomic) struct UIOffset { double x1; double x2; } stackOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } stackPerspectiveInsets;
@property (nonatomic) struct UIOffset { double x1; double x2; } stackPerspectiveOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } stackSize;
@property (nonatomic) unsigned long long stackViewStyle;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)albumSubtitleFormat;
- (bool)allowsEmailInSubtitle;
- (long long)cellContentViewLayout;
- (void)configureWithSpec:(id)arg1;
- (bool)cornerOverlaysDisabled;
- (double)dynamicSubtitleleading;
- (double)dynamicTitleLeading;
- (double)dynamicTopLeading;
- (unsigned long long)folderStackViewStyle;
- (double)gridItemSpacing;
- (double)gridMargin;
- (bool)hasClearBackgroundColor;
- (bool)hasRoundedCorners;
- (long long)imageContentMode;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptyPeopleAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)photoDecoration;
- (struct CGSize { double x1; double x2; })pixelSize;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previewInsets;
- (void)setAlbumSubtitleFormat:(id)arg1;
- (void)setAllowsEmailInSubtitle:(bool)arg1;
- (void)setCellContentViewLayout:(long long)arg1;
- (void)setCornerOverlaysDisabled:(bool)arg1;
- (void)setDynamicSubtitleleading:(double)arg1;
- (void)setDynamicTitleLeading:(double)arg1;
- (void)setDynamicTopLeading:(double)arg1;
- (void)setFolderStackViewStyle:(unsigned long long)arg1;
- (void)setGridItemSpacing:(double)arg1;
- (void)setGridMargin:(double)arg1;
- (void)setHasClearBackgroundColor:(bool)arg1;
- (void)setHasRoundedCorners:(bool)arg1;
- (void)setImageContentMode:(long long)arg1;
- (void)setNameOfEmptyAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfEmptyPeopleAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfEmptySharedAlbumPlaceholderImage:(id)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPosterSquareCornerRadius:(double)arg1;
- (void)setPosterSubitemCornerRadius:(double)arg1;
- (void)setPreviewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShouldCenterTextHorizontally:(bool)arg1;
- (void)setShouldUseTableView:(bool)arg1;
- (void)setShowsDeleteButtonOnCellContentView:(bool)arg1;
- (void)setStackOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackPerspectiveInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStackPerspectiveOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStackViewStyle:(unsigned long long)arg1;
- (bool)shouldCenterTextHorizontally;
- (bool)shouldUseTableView;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (struct CGSize { double x1; double x2; })stackSize;
- (unsigned long long)stackViewStyle;

@end
