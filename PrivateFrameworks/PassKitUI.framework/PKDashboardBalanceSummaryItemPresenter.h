
@interface PKDashboardBalanceSummaryItemPresenter : NSObject <PKDashboardItemPresenter, QLPreviewControllerDataSource, QLPreviewControllerDelegate, QLPreviewItemDataProvider> {
    long long  _cellStyle;
    PKDashboardButtonCollectionViewCell * _downloadPDFCell;
    PKDashboardButtonCollectionViewCell * _exportStatementDataCell;
    NSData * _exportedStatementData;
    QLItem * _exportedStatementDataItem;
    NSDateFormatter * _formatterMonth;
    NSDateFormatter * _formatterMonthAndDay;
    NSDateFormatter * _formatterMonthDayYear;
    NSDateFormatter * _formatterMonthYear;
    NSData * _pdfData;
    QLItem * _pdfItem;
    QLPreviewController * _previewController;
    PKDashboardButtonCollectionViewCell * _sampleButtonCell;
    PKDashboardCurrencyAmountCell * _sampleCurrencyCell;
    PKDashboardTitleMessageCell * _sampleTitleMessageCell;
    PKPaymentTransactionCollectionViewCell * _sampleTransactionCell;
    UIImage * _statementIcon;
}

@property (nonatomic) long long cellStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(bool)arg5;
- (void)_configureDailyCashCell:(id)arg1 forItem:(id)arg2;
- (void)_configureExportStatementDataCell:(id)arg1 forItem:(id)arg2;
- (void)_configureInstallmentBalanceCell:(id)arg1 forItem:(id)arg2;
- (void)_configureInterestCell:(id)arg1 forItem:(id)arg2;
- (void)_configureMergeBalanceCell:(id)arg1 forItem:(id)arg2;
- (void)_configureMergeNoticeCell:(id)arg1 forItem:(id)arg2;
- (void)_configureMonthlySpendLimitCell:(id)arg1 forItem:(id)arg2;
- (void)_configurePaymentsAndCreditsCell:(id)arg1 forItem:(id)arg2;
- (void)_configurePriorStatementBalanceCell:(id)arg1 forItem:(id)arg2;
- (void)_configureRewardsSummaryCell:(id)arg1 forItem:(id)arg2;
- (void)_configureSpendingCell:(id)arg1 forItem:(id)arg2;
- (void)_configureStatementBalanceCell:(id)arg1 forItem:(id)arg2;
- (void)_configureStatementCell:(id)arg1 forItem:(id)arg2;
- (void)_configureStatementDownloadCell:(id)arg1 forItem:(id)arg2;
- (void)_configureTotalBalanceCell:(id)arg1 forItem:(id)arg2;
- (void)_configureTransactionLimitCell:(id)arg1 forItem:(id)arg2;
- (void)_downloadAndPresentStatementForItem:(id)arg1 inCollectionView:(id)arg2;
- (void)_downloadExportedStatementDataForItem:(id)arg1 withFileFormat:(id)arg2 inCollectionView:(id)arg3;
- (id)_readableFileTypeForFormat:(id)arg1 feature:(unsigned long long)arg2;
- (void)_selectFileFormatForExportedStatementDataForItem:(id)arg1 inCollectionView:(id)arg2;
- (id)_statementCellTitleForItem:(id)arg1;
- (bool)_statementIsFromMonthPriorToSummaryForItem:(id)arg1;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (long long)cellStyle;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (id)init;
- (Class)itemClass;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)provideDataForItem:(id)arg1;
- (void)setCellStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)statementIcon;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end
