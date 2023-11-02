
@interface APOdmlDESRecordManager : APOdmlSingleton {
    NSMutableDictionary * _desRecords;
}

@property (nonatomic, retain) NSMutableDictionary *desRecords;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addAdListToDES:(id)arg1 forRecordID:(id)arg2 placementType:(unsigned long long)arg3;
- (id)desRecords;
- (id)init;
- (id)recordForID:(id)arg1 placementType:(unsigned long long)arg2;
- (void)setDesRecords:(id)arg1;
- (void)updateAdData:(id)arg1 event:(long long)arg2 forRecordID:(id)arg3;

@end
