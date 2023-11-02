
@interface NTKCFaceDetailSectionController : NSObject {
    NTKCDetailTableViewCell * _cell;
    NTKFace * _face;
    bool  _hasSpacerRow;
    NTKCFaceDetailSectionHeaderView * _headerView;
    bool  _inGallery;
    NSMutableArray * _rows;
    long long  _section;
    UIViewController<NTKCTableViewProviding> * _tableViewController;
    NSString * _titleForHeader;
}

@property (nonatomic, retain) NTKCDetailTableViewCell *cell;
@property (nonatomic) NTKFace *face;
@property (nonatomic) bool hasSpacerRow;
@property (nonatomic, retain) NTKCFaceDetailSectionHeaderView *headerView;
@property (nonatomic) bool inGallery;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, retain) NSMutableArray *rows;
@property (nonatomic) long long section;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic) UIViewController<NTKCTableViewProviding> *tableViewController;
@property (nonatomic, readonly) NSString *titleForHeader;

+ (void)registerForTableView:(id)arg1;

- (void).cxx_destruct;
- (bool)_canSelectRow:(long long)arg1;
- (void)_commonInit;
- (id)_groupName;
- (double)_heightForSpacerRow;
- (id)_newSectionHeader;
- (id)_spacerRow;
- (bool)canSelectRow:(long long)arg1;
- (id)cell;
- (id)cellForRow:(long long)arg1;
- (void)didSelectRow:(long long)arg1;
- (id)face;
- (void)faceDidChange;
- (void)faceDidChangeResourceDirectory;
- (bool)hasSpacerRow;
- (id)headerView;
- (double)heightForHeaderView;
- (double)heightForRow:(long long)arg1;
- (bool)inGallery;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(bool)arg3;
- (long long)numberOfRows;
- (id)rows;
- (long long)section;
- (void)setCell:(id)arg1;
- (void)setFace:(id)arg1;
- (void)setHasSpacerRow:(bool)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInGallery:(bool)arg1;
- (void)setRows:(id)arg1;
- (void)setSection:(long long)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView;
- (id)tableViewController;
- (id)titleForHeader;

@end
