
@interface EPMergedRegionScanner : EDProcessor

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (bool)isObjectSupported:(id)arg1;
- (bool)processMergedRegion:(id)arg1 inWorksheet:(id)arg2;

@end
