
@interface _SBFolderPageElement : NSObject {
    SBFolderIcon * _folderIcon;
    SBIconGridImage * _gridImage;
    bool  _gridImagePossible;
    unsigned long long  _pageIndex;
    unsigned long long  _visibleRow;
}

@property (nonatomic) SBFolderIcon *folderIcon;
@property (nonatomic, retain) SBIconGridImage *gridImage;
@property (getter=isGridImagePossible, nonatomic) bool gridImagePossible;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long visibleRow;

- (void).cxx_destruct;
- (unsigned long long)firstVisibleMiniIconIndex;
- (unsigned long long)firstVisibleRowForGap;
- (id)folderIcon;
- (id)gridImage;
- (bool)isGridImagePossible;
- (unsigned long long)pageIndex;
- (void)setFolderIcon:(id)arg1;
- (void)setGridImage:(id)arg1;
- (void)setGridImagePossible:(bool)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setVisibleRow:(unsigned long long)arg1;
- (unsigned long long)visibleRow;

@end
