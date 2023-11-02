
@interface PXGadgetDataSource : PXSectionedDataSource {
    NSArray * _gadgetSections;
}

@property (nonatomic, readonly) NSArray *gadgetSections;
@property (nonatomic, readonly) bool hasNoContentGadget;
@property (nonatomic, readonly) NSString *publiclySafeDescription;

- (void).cxx_destruct;
- (void)_enumerateGadgetSectionsUsingBlock:(id /* block */)arg1;
- (void)_enumerateGadgetsInSection:(id)arg1 atSectionIndex:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)_gadgetsMatchingPredicate:(id)arg1;
- (void)enumerateGadgetSectionsUsingBlock:(id /* block */)arg1;
- (void)enumerateGadgetsUsingBlock:(id /* block */)arg1;
- (id)gadgetAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)gadgetSectionAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)gadgetSectionWithIdentifier:(id)arg1;
- (id)gadgetSections;
- (id)gadgetWithId:(id)arg1;
- (id)gadgetsOfClass:(Class)arg1;
- (id)gadgetsOfType:(unsigned long long)arg1;
- (bool)hasNoContentGadget;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForGadget:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForGadgetSectionWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithGadgetSections:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)publiclySafeDescription;

@end
