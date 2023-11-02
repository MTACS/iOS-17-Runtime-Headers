
@interface PXSearchRecentSearchesGadgetProvider : PXGadgetProvider

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;

@end
