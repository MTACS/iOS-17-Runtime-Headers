
@interface HKDataMetadataViewAllQuantitySeriesSection : HKDataMetadataSimpleSection <HKQuantitySeriesDataProviderDelegate> {
    <HKDataMetadataViewControllerDelegate> * _delegate;
    id /* block */  _reloadMetaDataVC;
    HKSample * _sample;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKDataMetadataViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ reloadMetaDataVC;
@property (retain) HKSample *sample;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)delegate;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id /* block */)reloadMetaDataVC;
- (void)reloadSampleData;
- (id)sample;
- (void)sampleDidChange:(id)arg1;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setReloadMetaDataVC:(id /* block */)arg1;
- (void)setSample:(id)arg1;

@end
