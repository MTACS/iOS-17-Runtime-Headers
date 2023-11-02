
@interface _EARPhoneticMatchData : NSObject {
    struct shared_ptr<quasar::DataFeed> { 
        struct DataFeed {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _dataFeed;
}

@property (nonatomic, readonly) struct shared_ptr<quasar::DataFeed> { struct DataFeed {} *x1; struct __shared_weak_count {} *x2; } dataFeed;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addOsym;
- (bool)appendData:(id)arg1 prior:(float)arg2;
- (void)applyRegexEnumerations;
- (int)convertFeedType:(long long)arg1;
- (struct shared_ptr<quasar::DataFeed> { struct DataFeed {} *x1; struct __shared_weak_count {} *x2; })dataFeed;
- (void)expDecayPriors;
- (int)getLimit;
- (id)initWithFeedType:(long long)arg1 jsonConfigFile:(id)arg2;
- (void)normalizePriors;
- (void)powerScalePriors;
- (bool)roomForMoreData;
- (void)sortItemsByPriorAsc;
- (void)sortItemsByPriorDesc;
- (void)writeTsv:(id)arg1;

@end
