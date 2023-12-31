
@interface GKSegmentedSectionHeaderView : GKSegmentedSelectorView {
    unsigned long long  _sectionIndex;
}

@property (nonatomic) unsigned long long sectionIndex;

- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setTitles:(id)arg1;

@end
