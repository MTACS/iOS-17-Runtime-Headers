
@interface HUQuickControlCollectionViewGridLayoutDetails : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    NSArray * _rowLayouts;
    HUQuickControlCollectionViewGridLayoutRowInfo * _sectionHeaderLayout;
    unsigned long long  _sectionIndex;
    HUQuickControlCollectionGridLayoutSettings * _settings;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, copy) NSArray *rowLayouts;
@property (nonatomic, retain) HUQuickControlCollectionViewGridLayoutRowInfo *sectionHeaderLayout;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic, retain) HUQuickControlCollectionGridLayoutSettings *settings;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)indexPathForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)indexPathForSectionHeader;
- (unsigned long long)numberOfColumnsInRow:(unsigned long long)arg1;
- (id)rowLayouts;
- (id)sectionHeaderLayout;
- (unsigned long long)sectionIndex;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRowLayouts:(id)arg1;
- (void)setSectionHeaderLayout:(id)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
