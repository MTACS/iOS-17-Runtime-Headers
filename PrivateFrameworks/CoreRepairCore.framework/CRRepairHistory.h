
@interface CRRepairHistory : NSObject {
    NSDictionary * repairHistoryMap;
}

- (void).cxx_destruct;
- (id)CAABasedRepairDateForComponent:(id)arg1 withHistory:(id)arg2;
- (id)RCHLBasedRepairDateForComponent:(id)arg1 withHistory:(id)arg2;
- (id)extractRCHLRepairHistory;
- (id)extractRepairsAfterACRZWithHistory:(id)arg1;
- (bool)hasHadRCHLBasedRepairForComponent:(id)arg1 withHistory:(id)arg2;
- (id)init;
- (bool)isRCHLRepairHistoryDevice;
- (id)repairDateForComponent:(id)arg1 withRCHLHistory:(id)arg2 withCAAHistory:(id)arg3;

@end
