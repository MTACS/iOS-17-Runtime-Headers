
@interface SUUIMenuBarSectionsViewController : SUUIStorePageSectionsViewController {
    unsigned long long  _numberOfIterationsForShelfPageSections;
}

@property (nonatomic) unsigned long long numberOfIterationsForShelfPageSections;

- (id)defaultSectionForComponent:(id)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (unsigned long long)numberOfIterationsForShelfPageSections;
- (void)setNumberOfIterationsForShelfPageSections:(unsigned long long)arg1;

@end
