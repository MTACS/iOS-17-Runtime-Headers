
@interface MessageListSearchSectionDataSource : MessageListRecentSectionDataSource {
    UICollectionViewSupplementaryRegistration * _footerRegistration;
}

@property (nonatomic, retain) UICollectionViewSupplementaryRegistration *footerRegistration;

- (void).cxx_destruct;
- (id)configuredReusableSupplementaryViewForCollectionView:(id)arg1 elementKind:(id)arg2 indexPath:(id)arg3;
- (id)footerRegistration;
- (bool)hasSupplementaryViewOfKind:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1 section:(id)arg2 collectionView:(id)arg3 listCellClass:(Class)arg4 searchProgressView:(id)arg5 messageList:(id)arg6 initialLoadCompletedPromise:(id)arg7 layoutValuesHelper:(id)arg8 state:(id)arg9;
- (void)setFooterRegistration:(id)arg1;

@end
