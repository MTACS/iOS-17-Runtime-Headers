
@protocol BLTSectionInfoListBBProvider <BLTSectionInfoListProvider>

@required

- (<BLTSectionInfoListProviderDelegate> *)delegate;
- (void)reloadSection:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)reloadWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (BLTSectionInfoItem *)sectionInfoForSectionID:(NSString *)arg1;
- (void)setDelegate:(id <BLTSectionInfoListProviderDelegate>)arg1;

@end
