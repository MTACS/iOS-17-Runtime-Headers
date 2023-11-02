
@interface WFGlyphPicker : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WFGlyphPickerTabBarDelegate> {
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    long long  _control;
    <WFGlyphPickerDelegate> * _delegate;
    double  _glyphDimension;
    NSArray * _glyphSections;
    long long  _lastEvent;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
    UISegmentedControl * _segmentedControl;
    unsigned short  _selectedGlyphCharacter;
    WFGlyphPickerTabBar * _tabBar;
    bool  _useOutlineGlyphsOnly;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic) long long control;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFGlyphPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double glyphDimension;
@property (nonatomic, copy) NSArray *glyphSections;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastEvent;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic) unsigned short selectedGlyphCharacter;
@property (readonly) Class superclass;
@property (nonatomic) WFGlyphPickerTabBar *tabBar;
@property (nonatomic) bool useOutlineGlyphsOnly;

+ (unsigned long long)numberOfSections;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionViewLayout;
- (long long)control;
- (id)delegate;
- (unsigned short)glyphCharacterAtIndexPath:(id)arg1;
- (double)glyphDimension;
- (void)glyphPickerTabBar:(id)arg1 didSelectTabAtIndex:(unsigned long long)arg2;
- (id)glyphSections;
- (id)indexPathForGlyphCharacter:(unsigned short)arg1;
- (id)initWithControl:(long long)arg1 glyphDimension:(double)arg2 sectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)initWithControl:(long long)arg1 glyphDimension:(double)arg2 sectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 useSystemGlyphsOnly:(bool)arg4 useOutlineGlyphsOnly:(bool)arg5;
- (long long)lastEvent;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)pickedSegment:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)scrollToSection:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (id)segmentedControl;
- (unsigned short)selectedGlyphCharacter;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setControl:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGlyphDimension:(double)arg1;
- (void)setGlyphSections:(id)arg1;
- (void)setLastEvent:(long long)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSelectedGlyphCharacter:(unsigned short)arg1;
- (void)setTabBar:(id)arg1;
- (void)setUseOutlineGlyphsOnly:(bool)arg1;
- (id)tabBar;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useOutlineGlyphsOnly;

@end
