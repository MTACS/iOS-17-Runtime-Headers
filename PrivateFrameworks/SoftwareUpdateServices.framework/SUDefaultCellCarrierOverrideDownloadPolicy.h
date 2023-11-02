
@interface SUDefaultCellCarrierOverrideDownloadPolicy : SUDefaultDownloadPolicy

- (bool)allowExpensiveNetwork;
- (id)description;
- (bool)isDownloadAllowableForCellular;

@end
