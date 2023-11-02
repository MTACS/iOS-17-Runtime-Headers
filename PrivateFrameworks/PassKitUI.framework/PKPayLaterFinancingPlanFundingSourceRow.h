
@interface PKPayLaterFinancingPlanFundingSourceRow : NSObject <PKPayLaterCollectionViewRow> {
    PKPayLaterFinancingPlanFundingSource * _fundingSource;
    id /* block */  _selectionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (void)handleCellSelection;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFinancingPlanFundingSource:(id)arg1 selectionHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (bool)shouldHighlightItem;

@end
