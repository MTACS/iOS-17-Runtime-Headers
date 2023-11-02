
@interface SearchUICombinedCollectionViewCell : SearchUICollectionViewCell <VRXInteractionDelegate> {
    SearchUICombinedCardSectionsView * _cardSectionView;
}

@property (retain) SearchUICombinedCardSectionsView *cardSectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cardSectionView;
- (void)createButtons:(id)arg1 :(id /* block */)arg2;
- (void)setCardSectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sizingView;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
