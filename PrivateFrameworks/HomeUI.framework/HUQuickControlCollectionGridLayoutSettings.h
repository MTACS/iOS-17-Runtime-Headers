
@interface HUQuickControlCollectionGridLayoutSettings : NSObject {
    long long  _horizontalAlignment;
    double  _interitemSpacing;
    unsigned long long  _itemSize;
    unsigned long long  _numberOfColumns;
    unsigned long long  _numberOfItems;
    unsigned long long  _numberOfRows;
    unsigned long long  _preferredLayoutStyle;
    double  _rowSpacing;
    NSAttributedString * _sectionAttributedHeader;
    NSString * _sectionHeader;
    NSString * _sectionIdentifier;
    unsigned long long  _sectionNumber;
    double  _sectionTopPadding;
    unsigned long long  _titlePosition;
}

@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) unsigned long long preferredLayoutStyle;
@property (nonatomic) double rowSpacing;
@property (nonatomic, retain) NSAttributedString *sectionAttributedHeader;
@property (nonatomic, retain) NSString *sectionHeader;
@property (nonatomic, retain) NSString *sectionIdentifier;
@property (nonatomic) unsigned long long sectionNumber;
@property (nonatomic) double sectionTopPadding;
@property (nonatomic) unsigned long long titlePosition;

- (void).cxx_destruct;
- (long long)horizontalAlignment;
- (double)interitemSpacing;
- (unsigned long long)itemSize;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfRows;
- (unsigned long long)preferredLayoutStyle;
- (double)rowSpacing;
- (id)sectionAttributedHeader;
- (id)sectionHeader;
- (id)sectionIdentifier;
- (unsigned long long)sectionNumber;
- (double)sectionTopPadding;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setItemSize:(unsigned long long)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setNumberOfItems:(unsigned long long)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setPreferredLayoutStyle:(unsigned long long)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setSectionAttributedHeader:(id)arg1;
- (void)setSectionHeader:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSectionNumber:(unsigned long long)arg1;
- (void)setSectionTopPadding:(double)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (unsigned long long)titlePosition;

@end
