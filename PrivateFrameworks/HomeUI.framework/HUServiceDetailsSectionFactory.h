
@interface HUServiceDetailsSectionFactory : NSObject {
    id /* block */  _customComparator;
}

@property (nonatomic, copy) id /* block */ customComparator;

- (void).cxx_destruct;
- (id /* block */)_serviceDetailsItemComparatorForSectionIdentifier:(id)arg1;
- (id)buildServiceDetailsItemSectionForSourceItem:(id)arg1 sectionIdentifier:(id)arg2 items:(id)arg3;
- (id /* block */)customComparator;
- (void)setCustomComparator:(id /* block */)arg1;

@end
