
@interface PUImportOneUpScrubberCell : PUReviewScrubberCell <PXChangeObserver> {
    long long  _badgeType;
    <PUImportOneUpScrubberCellDisplayDelegate> * _displayDelegate;
    PXImportItemViewModel * _importItem;
    bool  _needsBadgeUpdate;
    bool  _selectable;
    UIActivityIndicatorView * _spinner;
    long long  _thumbnailRequestID;
}

@property (nonatomic) long long badgeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PUImportOneUpScrubberCellDisplayDelegate> *displayDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXImportItemViewModel *importItem;
@property (nonatomic) bool needsBadgeUpdate;
@property (nonatomic) bool selectable;
@property (nonatomic, readonly) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) long long thumbnailRequestID;

+ (id)emptyThumbnailBackgroundColor;

- (void).cxx_destruct;
- (void)_commonPUImportOneUpScrubberCellInitialization;
- (void)_createSpinnerIfNecessary;
- (long long)badgeType;
- (void)dealloc;
- (id)displayDelegate;
- (id)importItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)needsBadgeUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (void)refreshThumbnail;
- (bool)selectable;
- (void)setBadgeType:(long long)arg1;
- (void)setDisplayDelegate:(id)arg1;
- (void)setImportItem:(id)arg1;
- (void)setNeedsBadgeUpdate:(bool)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setThumbnailRequestID:(long long)arg1;
- (id)spinner;
- (long long)thumbnailRequestID;
- (void)updateBadgeUIIfNeeded;
- (void)updateToThumbnail:(id)arg1;

@end
