
@interface NTKCFaceDetailEditOptionVerticalSectionController : NTKCFaceDetailEditOptionSectionController {
    NSString * _footer;
    NTKCFaceDetailDescriptionCell * _footerCell;
}

@property (nonatomic, retain) NSString *footer;
@property (nonatomic, retain) NTKCFaceDetailDescriptionCell *footerCell;
@property (nonatomic, retain) NSMutableArray *rows;

- (void).cxx_destruct;
- (bool)_canSelectRow:(long long)arg1;
- (void)_setupWithCollection:(id)arg1;
- (id)cellForRow:(long long)arg1;
- (bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)didSelectRow:(long long)arg1;
- (void)faceDidChange;
- (id)footer;
- (id)footerCell;
- (double)heightForRow:(long long)arg1;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (long long)numberOfRows;
- (void)reloadActionRow;
- (void)setFooter:(id)arg1;
- (void)setFooterCell:(id)arg1;
- (void)setSelectedOptions:(id)arg1;

@end
