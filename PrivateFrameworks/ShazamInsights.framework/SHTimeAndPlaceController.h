
@interface SHTimeAndPlaceController : NSObject {
    <SHDataFetcher> * _dataFetcher;
}

@property (nonatomic, readonly) <SHDataFetcher> *dataFetcher;

- (void).cxx_destruct;
- (void)affinityGroupsFromData:(id)arg1 atLocation:(id)arg2 onDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)dataFetcher;

@end
