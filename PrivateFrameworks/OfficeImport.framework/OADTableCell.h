
@interface OADTableCell : NSObject {
    int  mGridSpan;
    bool  mHorzMerge;
    int  mLeftColumn;
    OADTableCellProperties * mProperties;
    int  mRowSpan;
    OADTextBody * mTextBody;
    int  mTopRow;
    bool  mVertMerge;
}

- (void).cxx_destruct;
- (id)description;
- (int)gridSpan;
- (bool)horzMerge;
- (id)init;
- (int)leftColumn;
- (bool)merge:(int)arg1;
- (id)properties;
- (int)rowSpan;
- (void)setGridSpan:(int)arg1;
- (void)setHorzMerge:(bool)arg1;
- (void)setLeftColumn:(int)arg1;
- (void)setProperties:(id)arg1;
- (void)setRowSpan:(int)arg1;
- (void)setTextBody:(id)arg1;
- (void)setTopRow:(int)arg1;
- (void)setVertMerge:(bool)arg1;
- (int)spanAlongDir:(int)arg1;
- (id)textBody;
- (int)topRow;
- (bool)vertMerge;

@end
