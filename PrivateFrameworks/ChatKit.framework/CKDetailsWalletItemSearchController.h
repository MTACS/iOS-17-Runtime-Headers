
@interface CKDetailsWalletItemSearchController : CKWalletItemSearchController {
    CKWalletItemSearchResultsCell * _sizingCell;
}

@property (nonatomic, retain) CKWalletItemSearchResultsCell *sizingCell;

+ (id)sectionIdentifier;

- (void).cxx_destruct;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (void)setSizingCell:(id)arg1;
- (id)sizingCell;

@end
