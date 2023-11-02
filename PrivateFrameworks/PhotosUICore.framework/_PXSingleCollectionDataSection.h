
@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {
    long long  _count;
    <PXDisplayCollection> * _displayCollection;
    unsigned long long  _lockState;
}

@property (nonatomic, readonly) <PXDisplayCollection> *displayCollection;
@property (nonatomic, readonly) unsigned long long lockState;

- (void).cxx_destruct;
- (long long)count;
- (id)displayCollection;
- (long long)indexOfCollection:(id)arg1;
- (id)initWithDisplayCollection:(id)arg1;
- (id)initWithDisplayCollection:(id)arg1 lockState:(unsigned long long)arg2;
- (unsigned long long)lockState;
- (unsigned long long)lockStateForCollection:(id)arg1;
- (id)objectAtIndex:(long long)arg1;

@end
