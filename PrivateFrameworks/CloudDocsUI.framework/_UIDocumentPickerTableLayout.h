
@interface _UIDocumentPickerTableLayout : UICollectionViewTableLayout <_UICollectionViewLayoutCellStyle> {
    long long  cellStyle;
}

@property (nonatomic) long long cellStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)cellStyle;
- (void)setCellStyle:(long long)arg1;

@end
